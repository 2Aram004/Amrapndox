#include <iostream>
double foo(double);
int main()
{
int num;
std::cout << "Enter your value in metres\t";
std::cin >> num;
std::cout << "Your value in kilomnetres\t" << foo(num);
return 0;
}
double foo(double num)
{
double kilo = num / 1000;
return kilo;

}
