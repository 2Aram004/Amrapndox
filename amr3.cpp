#include <iostream>
int foo(int);
int main(){
int num;
std::cin >> num;
std::cout << foo(num);
}
int foo(int num){
 int sum = 0;
 while(num != 0){
  sum += num % 10;
  num /= 10;

 }
 return sum;
}
