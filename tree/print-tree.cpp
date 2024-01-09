#include <iostream>


struct Node{
    int data;
    Node* left;
    Node* right;
}; 

Node* makeNode(int value){
    Node* result = new Node();
    result->data = value;
    result->left = result->right=nullptr;
    return result;
}

void print(Node* root){
    if(root != nullptr){
        std::cout<<root->data<<std::endl;

        print(root->left);

        print(root->right);


    }
}

int main(){
    Node* root = makeNode(5);

    root-
    ``eNode(23);
    root->right = makeNode(45);

    print(root);

    return 0;
}





