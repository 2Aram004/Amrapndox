#include <iostream>
void foo(std::string);
int main()
{
	std::string num;
	std::cout << "Enter your number please";
	std::cin >> num;
	foo(num);
	return 0;
}
void foo(std::string num){
for(int i = 0; i < num.size(); ++i){
 std::cout << num[i] << ", ";}
}

