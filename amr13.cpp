#include <iostream>
void foo(int);
int main()
{
	int num;
 std::cout << "Enter your number\t";
 std::cin >> num;
 foo(num);
}
void foo(int num){
	int max;
	int min;
	while(num != 0){
	 int r = num % 10;
        
	 if(max < r)
	max = r;
	 if(min > r)
	min = r;	 
	num /= 10; 
	}
	std::cout << " Maximumy " << max << '\n'   
		  << " Minimumy " << min << '\n';
}
	
