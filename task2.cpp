#include <iostream>
#include <fstream>
#include <string>



bool begin(std::string str)

{

if(str[0] >= 'a' && str[0] <= 'z' )

  return true;

}



bool end(std::string str, int size)

{



 if(str[size] >= 'a' && str[size] <= 'z')

  return true;


}







int main(int arc, const char* argv[])

{

std::ifstream fin;

std::ofstream fout;

 fout.open( "task2.txt" );





std::string str;

std::string str2;

std::string tmp;

std::string line;



if(!fout.is_open())



 std::cout << "could not open file";



 else

   std::cout << "your file is open" << std::endl;



std::getline (std::cin, line);

fout << line;



fout.close();





fin.open("task2.txt");



while(!fin.eof())

{

  str = "";

  fin >> str;



  int n = str.size() - 1;

  if( begin(str)  && end(str, n))

{



   str[0] = str[0] - 32;

   str[n] = str[n] - 32;

   tmp += str;

   tmp += " ";

}



else if( end(str, n) )

{

    str[n] = str[n] - 32;

    tmp += str;

}



else if( begin(str))

{

  str[0] = str[0] - 32;

  tmp += str;

  tmp += " ";

}



else

    tmp += str;

    tmp += " ";



}

str2 += tmp;

fin.close();



fout.open("task2.txt");



fout <<  str2;





fout.close();

return 0;

}



   
