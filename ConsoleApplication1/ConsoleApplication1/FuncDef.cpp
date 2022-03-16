#include <iostream>
#include "funcdef.h"

using namespace std;

int suma(int a[], int br)
{
	int s = 0;
	for (int i = 0; i < br; i++)
		s += a[i];
	return s;
}

int multiply(int a, int b)
{
	return a * b;
}

int min(int a, int b)
{
	if (a < b) return a;
	return b;
}