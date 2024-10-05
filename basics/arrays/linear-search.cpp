#include<iostream>
using namespace std;

int search(int arr[],int size, int num){
	for(int i=0;i<size;i++){
		if(arr[i]==num){
			return i;
		}
		
	}
    return -1;
	/* return -100; */
};

int main(){
	int array[] = {4,76,34,54,34,11,23,12,98,67,34,23,67};
    int toFind = 23;
	int size = sizeof(array)/sizeof(array[0]);

	int index = search(array,size,toFind);

	if(index>-1){
		cout<<"The number "<<toFind<<" was found in the index: "<<index<<endl;
	}else{
		cout<<"The number "<<toFind<<" was not found!"<<endl;
	}
	return 0;
}
