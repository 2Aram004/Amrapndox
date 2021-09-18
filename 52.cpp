#include<iostream>
#include<sstream>
#include<string>
int main()
{
	std::string str;
	std::string maxstr;
	int max;
        std::cout << "mutqagreq tox\n";
	getline(std::cin, str);

	std::stringstream smax(str);

         while( !smax.eof() )
	 {
		 smax >> str;

		 if(str.size() > max)
		 {
			 max = str.size();
			 maxstr = str;
		 }
	 }
	 std::cout << "amenerkar toxy\t" << maxstr << '\n';
	 std::cout << "simvoneri qanaky\t" << max;
}
