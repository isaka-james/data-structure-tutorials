// This is the program that convert decimal to binary using stack

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

            top=top+1;
            array[top]=value; // I know i can write array[top++]=value;
            std::cout<<value<<" was pushed to stack!"<<std::endl;
        }

        void pop(){
            if(isEmpty()){
                std::cout<<"Stack underflow!"<<std::endl;
                exit(0);
            }

            top=top-1;
            std::cout<<array[top+1]<<" was popped out of stack!"<<std::endl;
        }

        int Top(){
            if(isEmpty()){
                std::cout<<"The stack is empty!"<<std::endl;
                exit(0);
            }
            return array[top];
        }


        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

};

int main(){
    int decimal;

    std::cout<<"\t\t  THE PROGRAM TO CONVERT DECIMAL TO BINARY"<<std::endl;
    std::cout<<"\t Enter a number: ";
    std::cin>>decimal;

    
    return 0;
}