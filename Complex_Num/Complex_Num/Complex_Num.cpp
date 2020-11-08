#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Complex.h"


int main()
{
    double Real = 0;
    double Imag = 0;
    printf("Input First Complex Number ('Re Im'): ");
    scanf("%lf %lf", &Real, &Imag);

    Complex A = ComplexCreate(Real, Imag);
    printf("Module of your complex number: %.2lf \n\n", ComplexGetModule(A));

    printf("Input Second Complex Number ('Re Im'): ");
    scanf("%lf %lf", &Real, &Imag);
    Complex B = ComplexCreate(Real, Imag);
    printf("Module of your second complex number: %.2lf \n\n", ComplexGetModule(B));

    Complex C = ComplexAdd(A, B);
    ComplexPrint(C);

    C = ComplexSubtract(A, B);
    ComplexPrint(C);

    C = ComplexMultiply(A, B);
    ComplexPrint(C);

    C = ComplexDivide(A, B);
    ComplexPrint(C);
}

