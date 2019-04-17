#ifndef POINT_H
#define POINT_H

class Point
{
public:			//x,y coordinate ex (100,100)
	Point(int a, int b) : x(a), y(b) {}
	int x;
	int y;
};

#endif // !POINT_H