#include <iostream>
#include <string>
#include <stack>


bool checkBalance(const std::string& brackets){
    std::stack<char> open;
    std::stack<char> close;

    for(char bracket : brackets){
        
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            open.push(bracket);

        }else if( bracket == '}' || bracket == ']' || bracket==')'){
            close.push(bracket);

        }

        
    }

    if(open.size()==close.size()){
        return true;
    }else{
        return false;
    }
}


int main(){
    std::string brackets;
    std::cout<<"Enter any number of parenthless : ";
    std::cin>>brackets;

    if(checkBalance(brackets)){
        std::cout<<"The brackets balanced!"<<std::endl;

    } else{
        std::cout<<"The brackets are NOT balanced!"<<std::endl;
    }

    return 0;
}