// A program that create a list of students with their names and grades,
// and print them with appliance of LinkedList

#include <iostream>

class Node{
    public:
        std::string studentName;
        char grade;
        Node* addr;


        Node(std::string studentName, char grade){
            this->studentName=studentName;
            this->grade=grade;
            this->addr=nullptr;
        }
};


class LinkedList{
    Node* head;
    public:
        LinkedList(){
            this->head=nullptr;
        }

    void addStudent(std::string studentName, char grade){
        Node* newNode = new Node(studentName,grade);
        newNode->addr = head;
        head = newNode;
    }

    void showStudent(){
        Node* copy = head;
        while(copy!=NULL){
            std::cout<<" The name of the student is "<<copy->studentName<<" and got a grade of '"<<copy->grade<<"'"<<std::endl;
            copy = copy->addr;
        }
    }

};

int main(){

    LinkedList studentList;
    std::string studentName;
    char grade;
    int max;
    std::cout<<"\t\t A STUDENT RECORDS SYSTEM "<<std::endl;
    std::cout<<"\n    How many students: ";
    std::cin>>max;
    std::cout<<""<<std::endl;

    for(int i=0;i<max;i++){
        std::cout<<"STUDENT No"<<i+1<<std::endl;
        std::cout<<"Enter a student name: ";
        std::cin>>studentName;
        std::cout<<studentName<<"'s grade: ";
        std::cin>>grade;
        studentList.addStudent(studentName,grade);
        std::cout<<"The student was added successfully!!\n\n "<<std::endl;

    }

    studentList.showStudent();

    return 0;

}