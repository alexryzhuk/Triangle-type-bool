#include "Triangle.h"
#include<cmath>
#include <iostream>
using namespace std;
Triangle::Triangle() {
	x1 = 0;
	x2 = 0;
	x3 = 0;
	y1 = 0;
	y2 = 0;
	y3 = 0;
}


Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}


Triangle::~Triangle() {}


void Triangle::Input() {
	cout << "Введіть координати точки №1: " << endl;
	cin >> x1 >> y1;
	cout << "Введіть координати точки №2: " << endl;
	cin >> x2 >> y2;
	cout << "Введіть координати точки №3: " << endl;
	cin >> x3 >> y3;
}


void Triangle::Out() {
	cout << "Координати: " << x1 << ";" << y1 << "   " << x2 << ";" << y2 << "   " << x3 << ";" << y3 << endl;
}


bool Triangle::equilateral()
{
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (AB == BC && AB == AC && BC == AC) {
		cout << "Рівносторонній" << endl;
		return true;		
	}
	else {		
		return false;		
	}
}


bool Triangle::versatile()
{
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (AB == BC && AB == AC && BC == AC) {
		return false;	
	}
	else {
		return true;	
	}
}


bool Triangle::isosceles()
{
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (AB == BC && AB != AC || AB == AC && AB != BC || BC == AC && BC != AB) {
		return true;
	}
	else return false;
}


bool Triangle::rectangular()
{
	if (x1 == x2 && y1 == y3|| x1 == x3 && y2 == y3 || x2 == x3 && y2 == y1) {
		return true;
	}
	return false;
}


bool Triangle::acute_angled()
{
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if ((AB * AB) + (BC * BC) > (AC * AC) && (AB * AB) + (AC * AC) > (BC * BC) && (BC * BC) + (AC * AC) > (AB * AB)) {
		return true;
	}
	return false;
}

bool Triangle::obtuse()
{
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if ((AB * AB) + (BC * BC) < (AC * AC) || (AB * AB) + (AC * AC) < (BC * BC) || (BC * BC) + (AC * AC) < (AB * AB)) {
		return true;
	}
	return false;
}






