#include <iostream>
#include <string>
void foo(std::string);
int main()
{
	std::string str;
	std::getline(std::cin, str);
	char max_ch;
	int max = 1;
	int count = 1;
	for(int i = 1; i < str.size(); ++i){
		char tmp = str[i];
		if(str[i] == str[i - 1]){
			count++;}
			if(count >= max){
		        max = count;
		        max_ch = tmp;
			}
		/*}*/	else{
		 count = 1;
		}
	}
		for(; max > 0; --max){
			std::cout << max_ch;}
	}

