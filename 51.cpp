#include<iostream>
#include<string>
#include<sstream>
int main()
{
	std::string str;
	std::string minstr;
	std::string tmp;
	int min;

        std::cout << "mutqagreq tox";
	getline(std::cin, str);

	std::stringstream sline(str);
        tmp = str;
	while( !sline.eof() )
	{
		sline >> tmp;
		min = tmp.size(); 
		minstr = tmp;
		 break;	
	}

	while( !sline.eof() )
	{
		sline >> tmp;
		

		if(tmp.size() < min)
		{
			min = tmp.size();
			minstr = tmp;
		}	
			

	}
	std::cout << "amenakarch toxy" << " " << minstr <<std::endl;
	std::cout << "simvolneri qanaky" << " " << min; 

}
