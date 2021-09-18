#include <iostream>
#include <cmath>
void foo(int, int, int);
int main()
{
 int num1, num2, num3;
 std::cout << "Enter your numbers\n";
 std::cin >> num1 >> num2 >> num3;
 foo(num1, num2, num3);
 return 0;
}
void foo(int a, int b, int c){
 int D = pow(b, 2) - (4 * a  * c);
 double x1 = ((-b + sqrt(D)) / (2 * a));
 double x2 = ((-b - sqrt(D)) / (2 * a));
 std::cout << x1 << "  " << x2;
}
