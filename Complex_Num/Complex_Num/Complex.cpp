#define _CRT_SECURE_NO_WARNINGS
#include "Complex.h"
#include <math.h>
#include <iostream>

Complex ComplexCreate(double re, double im)
{
	return Complex{ re, im };
}

double ComplexGetModule(Complex& num)
{
	return hypot(num.Re, num.Im);
}

Complex ComplexAdd(Complex& num1, Complex& num2)
{
	return Complex{ num1.Re + num2.Re, num1.Im + num2.Im };
}

Complex ComplexSubtract(Complex& num1, Complex& num2)
{
	return Complex{ num1.Re - num2.Re, num1.Im - num2.Im };
}

Complex ComplexMultiply(Complex& num1, Complex& num2)
{
	return Complex{ num1.Re * num2.Re - num1.Im * num2.Im, num1.Re * num2.Im + num1.Im * num2.Re };
}

Complex ComplexDivide(Complex& num1, Complex& num2)
{
	return Complex{ (num1.Re * num2.Re + num1.Im * num2.Im) / (num2.Re * num2.Re + num2.Im * num2.Im),
					(num1.Im * num2.Re - num2.Im * num1.Re) / (num2.Re * num2.Re + num2.Im * num2.Im) };
}

void ComplexPrint(Complex& num)
{
	if (num.Im >= 0)
		printf("%.2lf + %.2lf * i \n\n", num.Re, num.Im);
	else
		printf("%.2lf - %.2lf * i \n\n", num.Re, num.Im * (-1));
}

