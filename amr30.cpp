#include <iostream>
void foo(int arr[][3], int, int arr1[], int);
int main()
{
int arr1[9];
int arr[3][3];
std::cout << "Enter your numbers\n";
for(int i = 0; i < 3; ++i){
 for(int j = 0; j < 3; ++j){
  std::cin >> arr[i][j];
 }
}
foo(arr, 3, arr1, 9);
}
void foo(int arr[][3], int size, int arr1[], int size1){
	int z = 0;
	for(int i = 0; i < 3; ++i){
	 for(int j = 0; j < 3; ++j){
	   arr1[z] = arr[i][j];
		  ++z;
	 }
	}
 for(int i =0; i < size1; ++i)
	 std::cout << arr1[i];

}
