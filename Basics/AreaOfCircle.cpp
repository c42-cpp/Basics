#include "pch.h"
#include "AreaOfCircle.h"
#include <iostream>

using namespace std;

void AreaOfCircle()
{
	float radius;

	cout << "Enter the radius of the circle";
	cin >> radius;

	float area = (22.0 / 7) * radius * radius;

	cout << "The area is : " << area << endl;
}