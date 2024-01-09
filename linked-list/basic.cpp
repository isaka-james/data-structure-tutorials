#include <iostream>

class node{
    public:
        int value;
        node* addr;
};

void show(node* head){
    while(head != NULL){
        std::cout<<"The value stored is : "<<head->value<<std::endl;
        //if(head->addr != NULL ){
            head = head->addr;
        //}else{
        //    return;
        //}
        
    }
}


int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();
            
    head->value = 1;
    head->addr = second;

    second->value = 2;
    head->addr = third;

    third-> value = 9;
    third->addr = NULL;

    show(head);

    
}