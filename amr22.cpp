#include <iostream>
void foo(int arr[][3], int size);
int main()
{
  int arr[3][3];
  std::cout << "Enter your numbers\n";
  for(int i = 0; i < 3; ++i){
   for(int j = 0; j < 3; ++j){
    std::cin >> arr[i][j];
   }
  }
  foo(arr, 3);
}
void foo(int arr[][3], int size){
 for(int i = 0; i < size; ++i)
	 std::cout << arr[i][i];
}
