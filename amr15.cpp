#include <iostream>
void foo(int);
int main()
{
int num;
std::cout << "Enter your number please\t";
std::cin >> num;
foo(num);
}
void foo(int num)
{
	std::string str;
	while(num != 0){
	str = ( (if num % 2 == "0" ? "0" : "1") + str );
	num /= 2;}
        std::cout << str;
}
