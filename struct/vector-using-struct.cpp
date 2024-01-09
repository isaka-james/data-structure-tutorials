#include <iostream>

struct Vectorz{
    double i;
    double j;

    Vectorz operator+(Vectorz& real){
        Vectorz* result;

        real.i = i + real.i;
        real.j = j + real.j;
        return real;
    }
    void show(){
        std::cout<<"The answer is :: "<<i<<"i + "<<j<<"j"<<std::endl;
    }
};

int main(){
    Vectorz v1 = {3.4,8.9};
    Vectorz v2 = {4.3,22.1};

    Vectorz sum = v1 + v2;
    sum.show();

    return 0;
}