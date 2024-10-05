#include<iostream>
using namespace std;

// we use sentinel loop when we don't know how many times the loop will execute
int main(){
	int n=10;
	int x=-1;
	while(true){
		cout<<"The loop is in town"<<endl;
		if(x>=n){
			cout<<"The loop broke"<<endl;
			break;
		}
		++x;
	}

	return 0;
}
