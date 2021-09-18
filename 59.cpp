#include <iostream>
#include <fstream> 
const int size = 4;
int main()
{

 std::ofstream fout; 
 fout.open("Code.txt", std::ofstream::app);

 if (!fout.is_open()) 
 {
	 std::cout << "could not open file" << std::endl;
 }
 else 
 {
	 std::string str;
	 for(int i = 0; i < size; i++){
		 std::cout << "Enter any string\t";
	         std::cin >> str;
		 fout << '\n' << str;}
		 
 }
fout.close();



 std::ifstream fin;
 fin.open("Code.txt");

  if(!fin.is_open())
  {
     std::cout << "could not open file";
  }
  else
  {
	  std::cout << "your file is open" << std::endl;
	  std::string str2;
	  std::string tmp;
	  

	 while ( !fin.eof() )
	 {	
	   	 
	   fin >> str2; 
	   tmp += str2[0];
	     
	  }
	 
	 std::cout << tmp;
  }
fin.close();

}









