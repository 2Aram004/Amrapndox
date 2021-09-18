#include <iostream>
int sum(int num1, int num2){
int tmp = num1 + num2;
return tmp;
}

int mul(int num1, int num2){
int tmp = num1 * num2;
return tmp;
}
int sub(int num1, int num2){
int tmp = num1 - num2;
return tmp;
}
double divide(int num1, int num2){
double tmp = num1 / num2;
return tmp;
}
int main()
{
	int num1;
	int num2;
	char oper;
	std::cout << "Enter number please";
	std::cin >> num1;
	std::cout << "Enter number please";
	std::cin >> num2;
	std::cout << "Enter operation please";
	std::cin >> oper;
	if(oper == '+')
	std::cout << sum(num1, num2);

	else if(oper == '*')
	std::cout << mul(num1, num2);

	else if(oper == '-')
	std::cout << sub(num1, num2);

	else if(oper == '/')
	std::cout << divide(num1, num2);

	return 0;
}

