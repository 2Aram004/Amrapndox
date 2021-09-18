#include<iostream>
void foo(int arr[], int size, int i);

int main()
{
 int arr[5];
  
  for(int i = 0; i < 5; ++i)
  {
    std::cin >> arr[i];
  }

 int i = 0;
 foo(arr, 5, i);
 return 0;
}

void foo(int arr[], int size, int i)
{
 
 
  if( i >= size ){return;}
  
   std::cout << arr[i];
   foo(arr, size, ++i );
}
