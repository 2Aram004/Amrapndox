#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<map>
#include<iterator>

std::ifstream fin;


struct all{
    int x;
    double d;
    bool b;
    std::string str;
    std::string nametype;
};

std::map<std::string, all> mymap;



double cast(std::string str)
{
  double d;
  std::istringstream s(str);
  s >> d;
  return d;
}


char cast_ch(std::string str)
{
  char ch;
  std::istringstream s(str);
  s >> ch;
  return ch;
}




bool bigger(std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}



if(id == "digit")
{
 
 if(x > y)
   {
     
      return true;
   }



  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a > b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k > l)
 {
  return true;
 }
}


 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }
bool smaller(std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}
for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}



if(id == "digit")
{
 
 if(x < y)
   {
     
      return true;
   }



  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a < b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k < l)
 {
  return true;
 }
}


 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }

bool if_equal (std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}



if(id == "digit")
{
 
 if(x == y)
   {
     
      return true;
   }



  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a == b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k == l)
 {
  return true;
 }
}


 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }


bool if_not_equal (std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}
for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}



if(id == "digit")
{
 
 if(x != y)
   {
     
      return true;
   }



  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a != b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k != l)
 {
  return true;
 }
}


 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }

bool big_or_equal (std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}



if(id == "digit")
{
 
 if(x == y || x > y)
   {
     
      return true;
   }

  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a == b || a > b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k == l || k > l)
 {
  return true;
 }
}


 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }

bool small_or_equal (std::string str, std::string tmp)
{

int x, y;
double a, b;
bool k, l;
std::string id;

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
  if(it-> first == str && it-> second.nametype == "digit")
{
  y = it-> second.x;
  id = "digit";
}

  if(it-> first == str && it-> second.nametype == "point")
{  
  b = it-> second.d;
  id = "point";
}
 if(it-> first == tmp && it-> second.nametype == "logic")
{  
  l = it-> second.b;
  id = "logic";
}


}

for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



 if(it-> first == tmp && it-> second.nametype == "digit")
  {

  x = it-> second.x;
  }


 if(it-> first == tmp && it-> second.nametype == "point")
{  
  a = it-> second.b;
 
}

 if(it-> first == tmp && it-> second.nametype == "logic")
  {
  k = it-> second.b;
  }

}

if(id == "digit")
{
 
 if(x == y || x < y)
   {
     
      return true;
   }

  else
{
   std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;

 }  
 
}  

if(id == "point")
{
  if(a == b || a < b)
 {
 return true;
 }
else
{
  std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

return false;
}

}

if(id == "logic")
{
  if(k == l || k < l)
 {
  return true;
 }
}
 else
{
    std::string tmp1;
   fin >> tmp1;
   fin >> tmp1;
   while(tmp1 != "%")
{  
    fin >> tmp1;
}
    fin >> tmp1;

}

      return false;
 }
double for_plus(std::string str, std::string tmp)
{      
 int x, y;
 double a, b;
 bool k, l;
 std::string id;
   
for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
       
     
       
 
        if( it -> first == str && it -> second.nametype == "digit" )
        {    
            y = it -> second.x;
            id = "digit";
        }
        if(it -> first == tmp && it -> second.nametype == "digit")
        {
            x = it-> second.x;
           
        }
       
             
     
        if( it -> first == str && it -> second.nametype == "point" )
        {
            b = it -> second.d;
             id = "point";
        }
        if(it -> first == tmp && it -> second.nametype == "point")
        {
            a = it-> second.d;
 
        }
       

        if( it -> first == str && it -> second.nametype == "logic" )
        {
            id = "logic";
            l  = it -> second.b;
           
        }
        if(it -> first == tmp && it -> second.nametype == "logic")
        {
            k = it-> second.b;
        }
     
     
  }
 
if (id == "digit")
 return x + y;

if (id == "point")
 return a + b;
     
if (id == "logic")
  return k + l;

 }                                                        
      
double for_minus(std::string str, std::string tmp)
 
{
 
 int x, y;
 double a, b;
 bool k, l;
 std::string id;
 
 
 for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){



         if( it -> first == str && it -> second.nametype == "digit" )
        {  
            y = it -> second.x;
            id = "digit";
        }
        if(it -> first == tmp && it -> second.nametype == "digit")
        {  
            x = it-> second.x;
         
        }

        if( it -> first == str && it -> second.nametype == "point" )
        {
            b = it -> second.d;
             id = "point";
        }
        if(it -> first == tmp && it -> second.nametype == "point")
        {
            a = it-> second.d;
           
        }


        if( it -> first == str && it -> second.nametype == "logic" )
        {
            id = "logic";
            l  = it -> second.b;

        }
        if(it -> first == tmp && it -> second.nametype == "logic")
        {
            k = it-> second.b;
        }


  }

if (id == "digit")
 return x - y;

if (id == "point")
 return a - b;

if (id == "logic")
  return k - l;

}


double for_mul (std::string str, std::string tmp)

{
 
 int x, y;
 double a, b;
 bool k, l;
 std::string id;


 for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it){
 


       if( it -> first == str && it -> second.nametype == "digit" )
        {
            y = it -> second.x;
             id = "digit";
        }
        if(it -> first == tmp && it -> second.nametype == "digit")
        {
            x = it-> second.x;

        }


        if( it -> first == str && it -> second.nametype == "point" )
        {
            a = it -> second.d;
             id = "point";
        }
        if(it -> first == tmp && it -> second.nametype == "point")
        {
            b = it-> second.d;

        }


        if( it -> first == str && it -> second.nametype == "logic" )
        {
            id = "logic";
            k  = it -> second.b;

        }
        if(it -> first == tmp && it -> second.nametype == "logic")
        {
            l = it-> second.b;
        }


  }

if (id == "digit")
 return x * y;

if (id == "point")
 return a * b;

if (id == "logic")
  return k * l;

 }

double for_div (std::string str, std::string tmp)
{


 int x, y;
 double a, b;
 bool k, l;
 std::string id;


for (std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)

{

        if( it -> first == str && it -> second.nametype == "digit" )
        {
             y = it -> second.x;
             id = "digit";
        }
        if(it -> first == tmp && it -> second.nametype == "digit")
        {
            x = it-> second.x;

        }


        if( it -> first == str && it -> second.nametype == "point" )
        {
             b = it -> second.d;
             id = "point";
        }
        if(it -> first == tmp && it -> second.nametype == "point")
        {
            a = it-> second.d;

        }


        if( it -> first == str && it -> second.nametype == "logic" )
        {
            id = "logic";
            l  = it -> second.b;

        }
        if(it -> first == tmp && it -> second.nametype == "logic")
        {
            k = it-> second.b;
        }

 }

if (id == "digit")
 return x / y;

if (id == "point")
 return a / b;

if (id == "logic")
  return k / l;

 }




double for_xerox (std::string str)
{
    for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
    {
        if(it -> second.nametype == "digit" && str == it->first)
        {
            return it -> second.x;
        }
        else  if(it -> second.nametype == "point" && str == it-> first)
        {
            return it -> second.d;
        }
        else  if (it -> second.nametype == "logic"  && str == it -> first)
        {
            return it -> second.b;
        }

    }
    return false;
}



bool type(std::string str)
{
if(str == "digit" || str == "point" || str == "logic")
return true;
else
return false;
}



bool equal(std::string str)
{
    if(str == "=")
    {
        return true;
    } else {
   
        return false;
    }
}

bool is_same(std::string str)
{
    for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
    {      
        if(it -> first == str)
        {
            std::cout << "compile error";
            return false;
        }
    }
    return true;

}

bool first_index(std::string str)
{  
    if(str[0] >= 'A' && str[0] <= 'z')
    {
 
        return true;
    } else {
        std::cout << "compile error";
        return false;
    }
}

bool is_there (std::string str, std::string tmp)

{
int count = 0;
for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
	
     {
        if(it -> first == str)
        {
		
            ++count;
            
        }
    }

    
for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
	
     {
        if(it -> first == tmp)
        {
		
            ++count;
            
        }
    }



if(count == 2)

    return true;

else return false;



}
bool is_there (std::string str)

{

for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
	
     {
        if(it -> first == str)
        {
           
            return true;
        }
    }
    
    return false;
}

double foo(std::string str)
{
for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
    {
        if(it -> first == str && it-> second.nametype == "digit")
        {
           
            return it->second.x;
        }
     }
for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
    {
        if(it -> first == str && it-> second.nametype == "point")
        {
           
            return it->second.d;
        }
    }

for(std::map<std::string, all> :: iterator it = mymap.begin(); it != mymap.end(); ++it)
    {
        if(it -> first == str && it-> second.nametype == "logic")
        {
           
            return it-> second.b;
        }
    }




}

int main() {
double forcount1 = 22;
double forcount2 = 22;
int count;
char step;
std::streampos oldpos;
        std::string code;


fin.open("ban.txt");

if(!fin.is_open())
{
    std::cout << "could not open file";
}
else
{
std::cout << "your file is open" << std::endl;
 }

//// START ////

std::string str;



  while(!fin.eof()){ 
  w:
  fr:

 
  str = "";
    fin >> str;
     if(str == "digit")     ///////// cast to int /// digit == int
    {
        std::string tmp;
        fin >> str;  
        if ( first_index(str) ) {

            if (is_same(str)){
                tmp = str;
                fin >> str;
                if ( equal(str) ) {
                    fin >> str;
                    int x;
                    std::istringstream s(str);
                    s >> x;
                    all obj;
                    obj.x = x;

                    obj.nametype = "digit";
                    mymap.insert(std::pair<std::string, all>(tmp, obj) );
                }
            }
        }
    }


    else  if(str == "point")  ///// point  == double ///////// cast to double
    {
        std::string tmp;
        fin >> str;      
        if ( first_index(str) ) {

            if (is_same(str)){
                tmp = str;        
                fin >> str;      

               
            }
            if ( equal(str) ) {
                fin >> str;
                double d;
                std::istringstream s(str);
                s >> d;
                all obj;
                obj.d = d;

                obj.nametype = "point";
                mymap.insert(std::pair<std::string, all>(tmp, obj) );
            }
        }
    }


    else if (str == "logic")  ///// logic == bool ///////// cast to bool
    {
        std::string tmp;
        fin >> str;
        if ( first_index(str) ) {

        if (is_same(str)){
            tmp = str;
            fin >> str;

            if ( equal(str) ) {
                fin >> str;
                bool b;
                std::istringstream s(str);
                s >> b;
                all obj;
                obj.b = b;

                obj.nametype = "logic";
                mymap.insert(std::pair<std::string, all>(tmp, obj) );
                }
            }
        }
    }




if(str == "ete") {
fin >> str;

if (str == "#" )  
{
 
 fin >> str;
 std::string tmp = str;  
 fin >> str;            
 
 
if(str == ">")
{
 
  fin >> str;
if(is_there(str,tmp))
{
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
  if ( bigger(tmp2, tmp) )
 {
goto w;
   
  }
}
}
else {std::cout << "compile error";
break; }



 }


if(str == "<")
{
 
  fin >> str;
  if(is_there(str, tmp))
  {
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
  if ( smaller(tmp2, tmp) )
 {
goto w;
       
  }
  }

  }
  else {std::cout << "compile error";
break; }


}

  if(str == "==")
{
 
  fin >> str;
  if(is_there(str, tmp))
  {
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
  if ( if_equal (tmp2, tmp) )
 {
goto w;
   
       

}

  }

}
else {std::cout << "compile error";
break; }


}



if(str == "!=")
{
 
  fin >> str;
  if(is_there(str, tmp))
  {
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
  if ( if_not_equal (tmp2, tmp) )
 {
goto w;
   
       }
  }
  }
  else {std::cout << "compile error";
break; }



}

if(str == ">=")
{
 
  fin >> str;
  if(is_there(str, tmp))
  {
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
	  
  if (big_or_equal)  {
		  
 
	 
goto w;
   
       
  }
  }
  }
  
  else {std::cout << "compile error";
break; }



}

if(str == ">=")
{
 
  fin >> str;
  if(is_there(str, tmp))
  {
  std::string tmp2 = str;
  fin >> str;
 
  if(str == "#") {
     
	  
  if (small_or_equal)  {
		  
 
	 
goto w;
   
       
  }
  }
  }
  
  else {std::cout << "compile error";
break; }



}

}
}

 if (forcount1 == forcount2 && count > 0)
{
	fin.seekg(oldpos);
	fin >> str;
	 while(str != "%")
	 {
		 fin >> str;
		 
	 }
}

           if(str == "xerox")
    {
   
        fin >> str;
        std::string tmp = str; 
        fin >> str; 
     
        if(str != "+" && str != "-" && str != "*" && str != "/"){
            std::cout << for_xerox(tmp);
        }  
         if(  str == "+" )
   {  
          fin >> str; 
          if( is_there(str, tmp) ) {
          std::cout << for_plus(str, tmp); 
        }
	  else {std::cout << "compile error";
	  break;}
    }
       
        else if( str == "-")
      {

         fin >> str;
          if( is_there(str, tmp) ) {
        std::cout << for_minus(str, tmp); }

	  else { std::cout << "compile error";
		  break; }
       }

       else if(str == "*")
        {
           fin >> str;
          if( is_there(str, tmp) ) {
        std::cout << for_mul (str, tmp); }
       
	  else { std::cout << "compile error";
		  break; }

        }

       else if(str == "/")
      {
         
          fin >> str;
          if( is_there(str, tmp) ) {
          std::cout << for_div(str, tmp); }
	  
	  else { std::cout << "compile error";
		  break; }

       }

}

 if (forcount1 != forcount2)                                                        
                                                                                   
 {
	++count;
                                                                                     
                   
                                                                                                                                                                   
      fin.seekg(oldpos);
                                                                                       
    if(step == '+')
{                                                                                
      ++forcount1;
 
      goto fr;
}
 else if(step == '-')
{
     --forcount1;


        goto fr;                                                                            
 }                                                                                        

}

 if(str == "cikl")
{
fin >> str;
if(str == "[")
{
      fin >> str;
                if(type (str) )    
{
fin >> str;
std::string tmp = str; 
       fin >> str;
if(equal(str))
{
fin >> str;
 if(is_there(str))
forcount1 = foo(str);
else                   {       
forcount1 = cast(str);

}
fin >> str; 
       if(str == ".")
{
      fin >> str;
              if(str == tmp)
      {
      fin >> str;
      if(str == "<" || ">" || "!=" || "==")
      {
      fin >> str;
      if(is_there(str))
      {
	      forcount2 = foo(str);
      }
      else
      forcount2 = cast(str);
      fin >> str;
      if(str == ".")
      {
      fin >> str;
      if(str == "+" || "-")
      {
      step = cast_ch(str);
      fin >> str;
      if(str == tmp)

      {

      fin >> str;

      if(str == "]")
      {
      fin >> str;
      if(str == "%")

      oldpos = fin.tellg();
                                                                                   
    }          
      }
   }}} }
}

}
}
}
}
 }
std::cout<<std::endl;
 
return 0;
}



