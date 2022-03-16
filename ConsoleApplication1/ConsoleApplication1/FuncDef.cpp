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