#include "pch.h"
#include "EnumDemo.h"
#include <iostream>

using namespace std;

enum  Day
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun // Mon = 0; Tue=2 & Fri would be 11, Sat 12 etc
};

void EnumDemo()
{
	Day d = Thu;

	cout << d << endl;
}