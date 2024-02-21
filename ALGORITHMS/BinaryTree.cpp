#include <iostream>

class TreeStructure{
    public:
        int data;
        TreeStructure* left;
        TreeStructure* right;

        TreeStructure(int value){
            this->data=value;
            this->left=nullptr;
            this->right=nullptr;
        }
};

class BinaryTree{
    TreeStructure* root;

    TreeStructure* insertValue(TreeStructure* node, int value){
        if(!node){
            return new TreeStructure(value);
        }

        if(value<node->data){
            node->left=insertValue(node->left, value);
        }else if(value>node->data){
            node->right=insertValue(node->right, value);
        }

        return node;
    }

    public:
        BinaryTree(){
            this->root=nullptr;
        }
        void insert(int value){
            root=insertValue(root,value);
        }

        void intransversal(TreeStructure* copy){
            if(copy){
                intransversal(copy->left);
                std::cout<<copy->data<<" ";
                intransversal(copy->right);
                std::cout<<"  -  ";
            }
        }
        void display(){
            intransversal(root);
        }

};

int main(){
    BinaryTree mytree;

    mytree.insert(9);
    mytree.insert(4);
    mytree.insert(3);
    mytree.insert(7);
    mytree.insert(2);

    std::cout<<"The intransversal: ";
    mytree.display();
    return 0;
}