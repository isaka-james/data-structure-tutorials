// A program converting decimal to binary to stack

#include <iostream>

int const MAX=100;

class Stack{
    int array[MAX];
    int top;

    public:
        Stack(){
            this->top=-1;
        }

        void push(int value){
            if(top==MAX-1){
                std::cout<<"Stack overflow!"<<std::endl;
                exit(0);
            }

            // push logic
            top=top+1; // top++;
            array[top]=value;
        }

        void pop(int value){
            if(isEmpty()){
                std::cout<<"Stack underflow!"<<std::endl;
                exit(0);
            }

            // pop up logic
            top=top-1; // top--;
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

        void show(){
            if(isEmpty()){
                std::cout<<"Nothing to show!"<<std::endl;
                exit(0);
            }

            int copy=top;
            while(copy>-1){
                std::cout<<array[copy];
                copy=copy-1; // --copy;
            }
        }
};


int main(){
    Stack stack;
    int decimal;
    bool status=true;

    std::cout<<"Enter a number: ";
    std::cin>>decimal;

    while(status){
        if(decimal==1){
            stack.push(1);
            std::cout<<"Pushed the last 1"<<std::endl;
            break;
        }
        if(decimal%2==0){
            decimal=(decimal-(decimal%2))/2; // decimal = ( decimal )/2;
            stack.push(0);
            std::cout<<"Pushed 0"<<std::endl;
        }else{
            decimal=(decimal-(decimal%2))/2;
            stack.push(1);
            std::cout<<"Pushed 0"<<std::endl;
        }
    }
    

    stack.show();
    
    return 0;
}