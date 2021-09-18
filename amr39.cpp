#include <iostream>

struct Point
{
	int x;
	int y;

};

struct Line
{
	Point start;
	Point end;
	double result;
};

int main()
{
	Line First;
        Line Second;

	std::cout << "Enter the first line coordinates\t";
	std::cin >> First.start.x >> First.start.y >> First.end.x >> First.end.y;

	std::cout << std::endl;

	std::cout << "Enter the second line coordinates\t";
        std::cin >> First.start.x >> First.start.y >> First.start.x >> First.end.y;


	First.result = (double) (First.end.y - First.start.y) / (double) (First.end.x - First.start.x);


	Second.result = (double) (Second.end.y - Second.start.y) / (double) (Second.end.x - Second.start.x);


	if(First.result == Second.result)
	{
		std::cout << "do not intersect";
	}
	else
	{
		std::cout << "the lines intersect";
	}
}











