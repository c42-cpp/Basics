#include "pch.h"
#include "Overflow.h"
#include <iostream>

using namespace std;

void OverflowDemo()
{
	char x = 127;

	cout << x << "\n";

	x++;

	cout << "After increment: " << x << "\n";
	cout << "Numeric value is: " << (int)x;
}