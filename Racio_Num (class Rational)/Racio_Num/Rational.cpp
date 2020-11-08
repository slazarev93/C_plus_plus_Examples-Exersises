#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "Rational.h"

int Rational::check = 0;    // static class field

Rational operator+(Rational& a, Rational& b)
{
    return Rational(a.getNumerator() * b.getDenominator() + b.getNumerator() * a.getDenominator(), a.getDenominator() * b.getDenominator()).Reduce();   // returns a copy of created object
}

Rational operator-(Rational& a, Rational& b)
{
    return { a.getNumerator() * b.getDenominator() - b.getNumerator() * a.getDenominator(), a.getDenominator() * b.getDenominator() };
}

Rational operator*(Rational& a, Rational& b)
{
    return { a.getNumerator() * b.getNumerator(), a.getDenominator() * b.getDenominator() };
}

Rational operator/(Rational& a, Rational& b)
{
    return { a.getNumerator() * b.getDenominator(), a.getDenominator() * b.getNumerator() };
}

bool operator<(Rational& a, Rational& b)
{   
    if ((a - b).getNumerator() < 0)
        return true;
    else
        return false;

}

bool operator<=(Rational& a, Rational& b)
{
    if ((a - b).getNumerator() <= 0)
        return true;
    else
        return false;
}

bool operator>(Rational& a, Rational& b)
{
    if ((a - b).getNumerator() > 0)
        return true;
    else
        return false;
}

bool operator>=(Rational& a, Rational& b)
{
    if ((a - b).getNumerator() >= 0)
        return true;
    else
        return false;
}

bool operator==(Rational& a, Rational& b)
{
    if ((a - b).getNumerator() == 0)
        return true;
    else
        return false;
}

bool operator!=(Rational& a, Rational& b)
{
    if ((a - b).getNumerator() != 0)
        return true;
    else
        return false;
}
