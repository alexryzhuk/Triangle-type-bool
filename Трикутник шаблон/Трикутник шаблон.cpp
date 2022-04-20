// Трикутник шаблон.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Triangle.h"
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle Triangle1(0, 0, 1, 1, 0, 1);
	
		Triangle1.Input();
		Triangle1.Out();
		//cout<<Triangle1.equilateral();//рівносторонній
		//cout<<Triangle1.rectangular();//різносторонній
		//cout << Triangle1.isosceles();//рівнобедрений
		//cout << Triangle1.rectangular(); //прямокутний
		cout << Triangle1.acute_angled();//гострокутній
		cout << Triangle1.obtuse();//тупокутній
}

