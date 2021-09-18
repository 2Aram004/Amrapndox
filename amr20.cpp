#include <iostream>
void foo(int arr[], int, int arr2[], int);
int main()
{
	int size, size2;
 std::cout << "Enter the size of your first array\t";
 std::cin >> size;
 int* ptr = new int[size];
	 int arr[size];
 for(int i = 0; i < size; ++i){
	 std::cout << "Enter value\t";
	 std::cin >> arr[i];}

 std::cout << "Enter the size of your second array\t"; 
 std::cin >> size2;
 int* ptr2 = new int[size2];
 int arr2[size2];
 for(int i = 0; i < size2; ++i){
	 std::cout << "Enter value\t";
	 std::cin >> arr2[i];
 }
 foo(arr, size, arr2, size2);
 delete [] ptr;
 delete [] ptr2;
 delete ptr;
 delete ptr2;
 ptr = nullptr;
 ptr2 = nullptr;
 
 }
void foo(int arr[], int size, int arr2[], int size2){
	if(size < size2){
 for(int i = 0; i < size; ++i){
	arr2[i] = arr[i] * arr2[i];
 }
 for(int i = 0; i < size2; ++i)
	 std::cout << arr2[i];
	}
	else {
	for(int i = 0; i < size2; ++i){
	 arr[i] = arr[i] * arr2[i];
	}
	for(int i = 0; i < size; ++i)
		std::cout << arr2[i];
}
}
