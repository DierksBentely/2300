// Graham Pomfret 0595 995
// program that performs 1.0/3.0 with doubles and prints the output with 40 digits of precision

#include "stdafx.h"
#include<iostream>
using namespace std;

int a = 1;
int b = 2;

double fa = 1.0;
double fb = 3.0;

int main()
{
	int c = a + b;
	double fc = fa / fb;
	cout.precision(40);
	cout << fc;
	cin.get();
	return 0;
}

