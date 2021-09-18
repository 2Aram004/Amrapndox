#include <iostream> 

std::string foo(std::string str);

int main()
{
 std::string str;
 std::cin >> str;
  
 std::cout << foo(str);


}

std::string foo(std::string str)
{		 
 static int size = str.size() - 1;
 static std::string res;

if(size < 0) {return res;}

res += str[size];
--size;
   
  return foo(str);


}

