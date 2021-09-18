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
};

int main()
{
	Line l;
       
	std::cout << "Enter the  line coordinates\t";
	std::cin >> l.start.x >> l.start.y >> l.end.x >> l.end.y;

	return 0;
}





