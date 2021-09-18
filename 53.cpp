#include<iostream>
#include<string>
int main()
{
	std::string str;
	std::string numstr;
	
char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
std::cout << "mutqagreq tox"  << std::endl;
getline( std::cin, str);


for(int i = 0; i < str.size(); ++i){
for(int j = 0; j < 10; ++j ){
if(str[i] == arr[j])
numstr += arr[j];                                          
	
	}
	       }
	std::cout << numstr;
}

