﻿// Lab_02.cpp 
// < Половка Злата > 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 0.6

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double a; // вхідний параметр
	double z1; //результат обчислення 1-го виразу
	//double z2; //результат обчислення 2-го виразу

	cout << "a = "; cin >> a;
	z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	//z2 = 4 * cos(a / 2) * cos((5.0 * a) / 2.0) * cos(4 * a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}