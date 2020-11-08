#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "Rational.h"

void PrintRational(Rational& a)
{
    printf("%i/%i", a.numerator, a.denominator);
}

Rational SumRational(Rational& a, Rational& b)
{
    return { a.numerator * b.denominator + b.numerator * a.denominator, a.denominator * b.denominator };
}

Rational SubRational(Rational& a, Rational& b)
{
    return { a.numerator * b.denominator - b.numerator * a.denominator, a.denominator * b.denominator };
}

Rational MulRational(Rational& a, Rational& b)
{
    return { a.numerator * b.numerator, a.denominator * b.denominator };
}

Rational DivRational(Rational& a, Rational& b)
{
    return { a.numerator * b.denominator, a.denominator * b.numerator };
}

Rational ReadRational()
{
    Rational a{ 0,0 };
    scanf("%i / %i", &a.numerator, &a.denominator);
    return { a };

    /*  another edition

        int a;
        int b;
        scanf("%i/%i", &a, &b);
        return {a, b};

    */
}

int GCD(int a, int b)
{
    int r = 0;
    do
    {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);

    return a;
}

Rational& ReduceRational(Rational& a)
{
    int div = GCD(a.numerator, a.denominator);
    a.numerator = a.numerator / div;
    a.denominator = a.denominator / div;
    return a;
}