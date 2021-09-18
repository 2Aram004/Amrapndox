#include<iostream>
int maintmp;
int main() 
{
 int n;
 std::cout << "mutqagreq tiv";
 std::cin >> n;
  int num1 = 0;
  int num2 = 1; 
  for(int i = 1; i < n; ++i){
     maintmp = num1 + num2;
     
     int num2tmp = num2;
     num2 = num1 + num2;
     num1 = num2tmp; }
 
 std::cout << maintmp;
}

    
