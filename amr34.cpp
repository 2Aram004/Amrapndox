#include <iostream>


struct student
{
	std::string name;
	std::string lastname;
	int age;
} person;

void foo(student& );


int main()
{
 foo(person);

 return 0;
}

void foo(student& person)
{
	std::cout << "enter your name\t";
	std::cin >>  person.name;

        std::cout << "enter your lastname\t";
	std::cin >>  person.lastname;

        std::cout << "enter your age\t";
	std::cin >>  person.age;


}
