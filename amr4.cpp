#include <iostream>
int foo(int);
int main(){
int num;
std::cout << "Enter your number please";
std::cin >> num;
std::cout << foo(num);
}
int foo(int num){
 int mul = 1;
 while(num != 0){
  mul *= num % 10;
  num /= 10;

 }
 return mul;
}
