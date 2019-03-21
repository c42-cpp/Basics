#include "pch.h"
#include "Pointers.h"
#include <iostream>

using namespace std;

void ArraysInHeapDemo()
{
	// created in the stack
	// automatically deallocated when function returns
	int A[] = { 1, 2, 3, 4 };

	// created on the heap
	// needs to be deallocated by us as soon as it is not required anymore
	int *p = new int[4];

	p[0] = 5;
	p[3] = 55;

	cout << p << endl; // address of the starting position of the array
	cout << &p << endl; // address of the location of p itself
	cout << p[0] << endl;
	//cout << sizeof *p << endl;

	delete[]p; // delete memory allocated for the existing array 

	// resize the array i.e a brand new array allocated on the heap
	p = new int[10];

	cout << p << endl; // address of the starting position of the array
	cout << &p << endl; // address of the location of p itself
	//cout << sizeof *p << endl;

	delete[]p;

	p = nullptr;
}

void PointerArith()
{
	int A[] = { 2,4,6,8,10,12 };
	int *p = A;

	// move pointer to next location to print 4
	p++;
	cout << *p << endl;

	p = p + 3; // pointer will be pointing on 10

	cout << *p << endl;
	cout << *(p - 4) << endl;   // complete this statement to print 2 without moving pointer
}

void PointerGotchas()
{
	// 1. Uninitialized pointers
	/*
	-- seems to throw compile error though
		int *p;

		*p = 25;
	*/

	int *p;

	// 1st way to initialise
	// int x;
	// p = &x;

	// 2nd way to initialise
	// p = (int*) <hard coded memory address>;

	// 3rd way to initialise. Here we initialise to point to an integer
	p = new int;
	*p = 25;

	cout << *p;

	delete []p;

	//cout << *p;
}

void ReferencesDemo()
{
	int x = 10;
	int &y = x;

	cout << x << endl; // -> 10
	y++;

	cout << x << &x << endl; // -> 11
	cout << y << &y << endl; // -> 11

	int z = 74;
	y = 74;
	cout << x << endl;  // --> 74
}

void PointerSizes()
{
	/*
	If int *p; and double *q; are pointers and x=sizeof(p); and y=sizeof(q); then for the values of x and y which of the following is true
	1. x > y
	2. x < y
	3. x == y

	Ans is x ==y as we are comparing the sizes of the pointer variables themselves which seems to be a double value
	*/
	int *p; double *q;

	cout << sizeof p << "  " << sizeof q << endl;  // 8 each

	cout << sizeof *p << "  " << sizeof *q << endl;  // 4 & 8
}