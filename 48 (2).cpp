#include<iostream>
void fill(int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	  std::cin >> arr[i];
}
void show(const int newarr[], const int size)
{
	 for(int i = 0; i < size; ++i)
	  {
		  std::cout << newarr[i];
	  }

}
void popindex(int *&arr, int& size, int index)
{
  int* newarr = new int[size - 1];

   for(int i = 0; i < index; ++i)
   {
	   newarr[i] = arr[i];
   }
    for(int i = index + 1; i < size; ++i)
    {
	    newarr[i - 1] = arr[i];
    }
    --size;
    delete [] arr;
    arr = newarr;
    
}
int main()
{
	std::cout << "mutqagreq dzer zangvaci chapy" << std::endl;
	        int size;
                std::cin >> size;	
	        int* arr = new int[size];

	std::cout <<"mutqagreq dzer zangvaci tarrery" << std::endl;
	       fill(arr, size);

	std::cout << "mutqagreq ayn indexy vory uzum eq jnjel" << std::endl;
                int index;
	        std::cin >> index;
	
		popindex(arr, size, index);
	        show(arr, size);
	        delete[] arr;
	  
}
