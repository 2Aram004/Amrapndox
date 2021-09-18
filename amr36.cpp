
#include <iostream>


struct student
{
	std::string name;
	std::string lastname;
	int age;
} person;

void foo(student arr[], int);


int main()
{
 student arr[3];
 foo(arr, 3);

 return 0;
}

void foo(student arr[], int size)
{
	for(int i = 0; i < 2; ++i){
	std::cout << "enter your name\t";
	std::cin >>  arr[i].name;

        std::cout << "enter your lastname\t";
	std::cin >>  arr[i].lastname;

        std::cout << "enter your age\t";
	std::cin >>  arr[i].age;}

	arr[2].name = arr[0].name;
	arr[2].lastname = arr[1].lastname;
	arr[2].age = (arr[0].age + arr[1].age) / 2;
}

