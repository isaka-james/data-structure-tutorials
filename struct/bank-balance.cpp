#include <iostream>

struct Bank{
    private:
        double balance;

    public:
    
        void deposit(double deposit){
            balance +=deposit;
        }
        void showBalance(){
            std::cout<<"Your balance : "<<balance<<std::endl;
        }
};

int main(){
    Bank crdb;

    crdb.deposit(1000.0);
    crdb.deposit(350.0);
    crdb.showBalance();

    return 0;
}