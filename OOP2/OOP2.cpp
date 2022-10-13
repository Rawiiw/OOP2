#include <iostream>
using namespace std;


class Point
{
protected:int x, y;
public:
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	double size()
	{
		cout << "Unsized"<< endl;
		return 0.0;
	}
};
class Line : public Point
{
	int x_2, y_2;
public:
	Line(int x1, int y1, int x2, int y2) : Point(x1, y1)
	{
		x2 = x_2;
		y2 = y_2;
		cout << "Line" << x1, y1 « x2, y2;
	}
	int size()
	{
		int line_size = (x_2 - x);
	}
};
class Square : public Line
{
	int x_4, y_4;
public:
	Square(int x3, int y3, int x4, int y4) : Line(x3, y3, x4, y4)
	{
		x4 = x_4;
		y4 = y_4;

		cout << "Square" << x3, y3 « x4, y4;
	}
	int size()
	{
		int S = (x_4 - y_4) * (x_4 - y_4);
	}
};
int main()
{
	Point : 1;
Line: 0, 4;
Quad: 0, 4, -4, 0;
}