// Graham Pomfret 0595 995
// this program loops through adding 0.000001 a million times and prints the output as a float

#include "stdafx.h"
#include<iostream>
using namespace std;

int a = 1;
int b = 2;

float fa = 1.0;
float fb = 3.0;

int main()
{
	cout.precision(40);
	float inc = 0.000001, sum = 0.0;
	for (float i = 1.0; i <= 1000000.0; i++)
	{
		sum += inc;
	}


	cout << sum;
	cin.get();
	return 0;
}

