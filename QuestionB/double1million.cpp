// Graham Pomfret 0595 995
// this program loops through adding 0.000001 a million times and prints the output as a double

#include "stdafx.h"
#include<iostream>
using namespace std;

int a = 1;
int b = 2;

double fa = 1.0;
double fb = 3.0;

int main()
{
	cout.precision(40);
	double inc = 0.000001, sum = 0.0;
	for (double i = 1.0; i <= 1000000.0; i++)
	{
		sum += inc;
	}


	cout << sum;
	cin.get();
	return 0;
}

