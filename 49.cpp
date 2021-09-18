#include<iostream>
void foo(int number, int k);
int main() 
{
	int number;
	int k; 
	std::cin >> number;
	std::cin >> k;

	 foo(number, k);
	 return 0;
}
 
 void foo(int number, int k)
{
  if(number == 0 || k == 0){ std::cout << "bad input";
	return ;}
    

  int tmp = number;
  int count = 1;
  while(number /= 10){
	  count++;}
  if(k > count){std::cout << tmp;}


  k = count - k;
if(k < count){
   while(k--){
	   tmp /= 10;}
	   std::cout << tmp;
}


else
{ std::cout << tmp;}
    

	  
	 
	 
}
