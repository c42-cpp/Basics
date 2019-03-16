#include "pch.h"
#include "Overflow.h"
#include <iostream>

using namespace std;

void OverflowDemo()
{
	// char occupies 1 byte i.e 8 bits so numeric range is between -128 & 127

	// 127 is "01111111"; adding 1 to this results in "10000000" - where the MSB is the sign bit so this is a -ve number
	// numerically this is also 2^8 = 128; so the value is -128
	char x = 127;

	cout << x << "\n";

	x++;

	cout << "After increment: " << x << "\n";
	cout << "Numeric value is: " << (int)x << endl;

	// 128 is again 127 + 1 - same result as above
	char a = 128;
	cout <<"a=128 is: " << (int)a << endl;

	// -129 is essentially -128-1; i.e 10000000 -1 => 01111111 => 127
	char c = -129;
	cout << "c = -129 is: " << (int)c << endl;

	// -128 => 10000000 => 10000000 - 1 => 01111111 => 127
	char d = -128;
	d--;
	cout << "d = -128; d-- is: " << (int)d << endl;

	int e = INT_MAX;
	e++;
	cout << "e = INT_MAX; e++ is: " << (int)e << endl;
}