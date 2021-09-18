#include <iostream>
void foo(int arr[], int);
int main()
{
	int size;
 std::cout << "Enter the size of your array\t";
 std::cin >> size;
 int* ptr = new int[size];
 int arr[size];
 for(int i = 0; i < size; ++i){
	 std::cin >> arr[i];
 }
 foo(arr, size);
 delete [] ptr;
 delete ptr;
 ptr = nullptr;
 return 0;
}
void foo(int arr[], int size){
 for(int i = size - 1; i >= 0; --i){
  std::cout << arr[i] << " ";
 }
}
