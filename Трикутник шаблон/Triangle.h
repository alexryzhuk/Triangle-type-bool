#pragma once
using namespace std;
class Triangle
{
private:
	int x1, x2, x3, y1, y2, y3;		
public:
	Triangle(void);	
	Triangle(int, int, int, int, int, int);
	~Triangle(void);
	void Input();
	void Out();
	bool equilateral();
	bool versatile();
	bool isosceles();
	bool rectangular();
	bool acute_angled();
	bool obtuse();
	
};
