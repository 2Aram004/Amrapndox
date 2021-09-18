#include <iostream>
int foo(int arr[], int size);

int main()
{
int size;	
std::cout << "Enter the size of your first array\t";
 std::cin >> size;

 int* ptr = new int[size];
 int arr[size];

 for(int i = 0; i < size; ++i)
	 {
	 std::cout << "Enter value\t";
	 std::cin >> arr[i];
	 
	 }
 std::cout << foo(arr, size);
 
  return 0;

}

int foo(int arr[], int size)
{
	int result1 = 1;
	int result2 = 0;
	int mainresult = 0;
 
	for(int i = 0; i < size; ++i)
 {
	result1 *= arr[i];
	result2 += arr[i]; 
 }
    	
       mainresult = (result1 + result2) / 2;

       return mainresult;


}
