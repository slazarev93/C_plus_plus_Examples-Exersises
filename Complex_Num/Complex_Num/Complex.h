struct Complex
{
	double Re;
	double Im;
};

Complex ComplexCreate(double re, double im);

double ComplexGetModule(Complex& num);

Complex ComplexAdd(Complex& num1, Complex& num2);

Complex ComplexSubtract(Complex& num1, Complex& num2);

Complex ComplexMultiply(Complex& num1, Complex& num2);

Complex ComplexDivide(Complex& num1, Complex& num2);

void ComplexPrint(Complex& num);