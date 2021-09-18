#include <iostream>
struct student
{
	std::string name;
	std::string lastname;
	int age;
};

void foo(student arr[], int);


int main()
{
	student arr[2];
 foo(arr, 2);

 return 0;
}

void foo(student arr[], int size)
{
	for(int i = 0; i < size; ++i){
	std::cout << "enter your name\t";
	std::cin >>  arr[i].name;

        std::cout << "enter your lastname\t";
	std::cin >>  arr[i].lastname;

        std::cout << "enter your age\t";
	std::cin >>  arr[i].age;
	}
int max_age = 0;
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
		if(arr[i].age > arr[j].age)
			max_age = arr[i].age;
	}}
	std::cout << max_age;


}


