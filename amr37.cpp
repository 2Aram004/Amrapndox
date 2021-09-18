#include <iostream>
struct point{
 int x;
 int y;
}obj;
void foo(point&);

int main()
{
	//std::cin >> obj.x >> obj.y;
	foo(obj);
return 0;
}
void foo(point& ob){
	std::cin >> ob.x >> ob.y;
}

