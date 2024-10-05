#include<iostream>
using namespace std;

int main(){
	int array[5]={1,2,4,5,6};
    int temp=0;

	for(int i=0;i<5;i++){
		cout<<"array["<<i<<"]"<<" = "<<array[i]<<endl;
		temp+=array[i];
	}
	cout<<"\nThe sum of elements of the array: "<<temp<<endl;
	return 0;
}
