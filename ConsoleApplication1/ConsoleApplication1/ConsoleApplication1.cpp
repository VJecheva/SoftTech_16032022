// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "funcdef.h"
using namespace std;
// Change Just Now
int main()
{
    int a[] = { 1,3,2,5,4,7,6,3 };
    cout << "Suma=" << suma(a, 8);
    cout << "Max=" << max(a[4], a[7]);
}

