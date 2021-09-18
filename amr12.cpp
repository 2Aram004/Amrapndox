#include <iostream>
void foo(char);
int main()
{
	char ch;
	std::cout << "Enter the symbol";
	std::cin >> ch;
	foo(ch);
}
void foo(char ch)
{
 for(int i = 0; i < 7; ++i){
  for(int j = 0; j < i; ++j){
   std::cout << ch;
  }
  std::cout << '\n';
 }
}
