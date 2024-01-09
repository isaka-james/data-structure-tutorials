#include <iostream>

struct Person{
    std::string name;
    int age;
    float height;
};

void show(Person* person){
    std::cout<<person->name<<" is "<<person->age<<" old, with a height of "<<person->height<<" metres."<<std::endl;

}

int main(){
    Person jack;
    std::cout<<"What's your name? "<<std::endl;
    std::cin>>jack.name;
    std::cout<<"How old are you? "<<std::endl;
    std::cin>>jack.age;
    std::cout<<"How tall are you? [ in metres ]"<<std::endl;
    std::cin>>jack.height;

    show(&jack);

    return 0;
}