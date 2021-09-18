#include <iostream>
void foo(std::string);
int main()
{
 std::string str;
 std::cout << "Enter your word please\n";
 std::cin >> str;
 foo(str);
 return 0;
}
void foo(std::string str){
	int count = 0;
	int max = 0; 
	int index = 0;
 for(int i = 0; i < str.size(); ++i){
  for(int j = 0; j < str.size(); ++j){
   if(str[i] == str[j]){
	   count++;}
   if(count > max){
	   max = count;
            index = i;
   }
  }
  count = 0;
 }
 std::cout << str[index] << "   " << max << "times";
}
