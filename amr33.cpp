#include<iostream>
bool foo(int n);
int main() 
{
   int n;
   std::cin >> n;
   std::cout << foo(n);
   return 0;
}
   

bool foo(int n)
{
	 if(n == 2) { return true;}

    for(int i = 2; i < n; ++i){
	    	   if(n % i == 0 ) {
		              return false;    }
	   
	   else if( n == i + 1)
		    return true;
    		  	  
	
	}
                    
    }
			     
      
