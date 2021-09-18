#include <iostream>
void foo(int num);


int main()
{
int num;
std::cout << "Enter your number please\t";
std::cin >> num;
foo(num);
return 0;

}



void foo(int num)
{
	std::string str;
char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

str += arr[num % 16];
if(num == 0){return;}

  foo(num / 16);
 std::cout << str;
}

