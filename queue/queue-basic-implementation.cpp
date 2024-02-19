// The queue that can enter, remove and display queue

#include <iostream>

const int MAX=100;

template <typename T>
class Queue{
    int array[MAX];
    int front;
    int rear;

    public:
        Queue(){
            this->front=0;
            this->rear=-1;
        }

        void push(T value){
            rear+=1;
            array[rear]=value;
        }

        void pop(){
            front+=1;
        }

        T Front(){
            return array[front];
        }

};


int main(){
    Queue<int> testing;
    testing.push(19);
    testing.push(89);

    std::cout<<"The front data is "<<testing.Front()<<std::endl;
    testing.pop();
    std::cout<<"After popping now the front data is "<<testing.Front()<<std::endl;

    return 0;
}