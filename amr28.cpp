#include <iostream>
int foo(int arr[], int);
int main(){
int arr[5];
for(int i = 0; i < 5; ++i){
	std::cout << "Enter your value\t";
	std::cin >> arr[i];
}

std::cout << foo(arr, 5);
}
int foo(int arr[], int size)
{
int count = 0;
for(int i = 0; i < size; ++i){
	if(arr[i] % 2 != 0){
		count++;}
}
return count;
}
