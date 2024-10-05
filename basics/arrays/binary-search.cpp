#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int toFind){
	int left = 0;
	int right = size -1; // since size is not indexed

	while(left <= right){
       int mid = left + ( right - left ) / 2;

	   if(arr[mid]==toFind){
		   return mid;
	   }

	   if(arr[mid] < toFind){
		   left = mid + 1;
		}else if(arr[mid] > toFind){
			right = mid - 1;
		}
	}

	return 0;
}


int main(){
	int array[]={1,2,3,4,5,8,22,56};
	int size = sizeof(array)/sizeof(array[0]);

	int toFind=22;

	int index = binarySearch(array,size,toFind);

	if(index != -1){
		cout<<"The value "<<toFind<<" was found at array["<<index<<"]"<<endl;
	}else{
		cout<<"The value "<<toFind<<" was not Found!"<<endl;
	}
	return 0;
}
