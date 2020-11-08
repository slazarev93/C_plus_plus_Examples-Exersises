#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Rational.h"
using namespace std;

int main()
{	
	Rational r;				// create by default constructor
	r.Print();
	Rational r1{ 1, 4 };	// create by overloaded constructor <=> Rational r1(3, 5); <=> Rational r1 = {3, 5};	
	r1.Print();
	Rational r2{ 1, 2 };	
	r2.Print();

	Rational r3 = r1 - r2;
	r3.Reduce();
	r3.Print();
	//float a = r3.Real();
	cout << "Real result: " << r3.Real() << endl << endl;

	if (r1 < r2)
	{
		r1.Println(); printf(" < "); r2.Print();
	}

}
