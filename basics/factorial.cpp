#include<iostream>
using namespace std;

int factorial_recursion(int num){
	if(num==0 || num==1){
		return 1;
	}
	return num * factorial_recursion(num -1);
}

int factorial_iteration(int num){
    int result=1;
	if(num==0){
		return 1;
	}
	for(int i=1;i<=num;i++){
		result*=i;
	}
	return result;
}

int main(){
	int num=3;
	cout<<"(recursion used):: The factorial of "<<num<<" is :"<<factorial_recursion(num)<<endl;
	cout<<"(iteration used):: The factorial of "<<num<<" is :"<<factorial_iteration(num)<<endl;
    return 0;
}
