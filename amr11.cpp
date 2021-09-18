#include <iostream>
void roof()
{
int t = 10;
for(int i = 5; i > 0; --i)
{
for(int j = 0; j < i; ++j)

 std::cout << ' ';
 std::cout << '/';
for(int c = i + 5; c < t; ++c)
{
 std::cout << ' ';
}
++t;
std::cout << '\\' << std::endl;
}
}
void walls()
{
 for(int j = 0; j <= 4; ++j)
 {
	 std::cout << '|';
		 for(int j = 0; j < 10; ++j)
		   std::cout << ' ';
		   std::cout << "|" << std::endl;
		 
 }
}
int main()
{
roof();
std::cout << "___________";
walls();
std::cout << "____________";
return 0;
}

