#include <iostream>

void bubbleSort(int array[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(array[j]>array[i]){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        std::cout<<" "<<array[i];
    }
}

int main(){
    int data[10]={3,1,8,5,6,4,9,0,9,2};

    std::cout<<"The output after sorting is: ";
    bubbleSort(data,10);
    return 0;
}