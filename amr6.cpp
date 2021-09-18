#include <iostream>
void foo(std::string);
int main()
{
 std::string str;
 std::cout << "Enter your word please\t";
 std::cin >> str;
 foo(str);
 return 0;
}
void foo(std::string str){
	std::string tmp;
 for(int i = 0; i < str.size(); ++i){
if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] =='u' || str[i] == 'y'){
		 continue;}
		
	 else{   tmp += str[i];}
	 
 }

std::cout << tmp;
}
