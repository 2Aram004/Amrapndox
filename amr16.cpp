#include <iostream>
int foo(int arr[], int);
int main()
{
	int size;
	std::cout << "Enter size of your array\t\a";
	std::cin >> size;
	int* p= new int[size];
	int arr[size];
	for(int i = 0; i < size; ++i){
	 std::cin >> arr[i];
	}
	std::cout << foo(arr, size);
	delete [] p;
	delete p;
	p = nullptr;

}
int foo(int arr[], int size){
	int max_index = 0;
	int max = arr[0];
 for(int i = 0; i < size; ++i){
  if(arr[i] > max){
	  max = arr[i];
          max_index = i;}
 }
 return max_index;
}
