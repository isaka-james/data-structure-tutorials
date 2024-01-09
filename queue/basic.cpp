#include <iostream>
#include <queue>

int main(){
  std::queue<double> numbers;

  std::cout<<"Before the loop:: "<<std::endl;
  std::cout<<"The size of number : "<<numbers.size()<<std::endl;

  for(int i=0;i<10;i++){
    numbers.push(i);
  }

  std::cout<<"The size after the loop : "<<numbers.size()<<"\n The front number is "<<numbers.front()<<"\n The back number is : "<<numbers.back()<<std::endl;

  return 0;

}
