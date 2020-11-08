struct Rational
{
    int numerator;
    int denominator;
};

void PrintRational(Rational& a); 

Rational SumRational(Rational& a, Rational& b);

Rational SubRational(Rational& a, Rational& b);

Rational MulRational(Rational& a, Rational& b);

Rational DivRational(Rational& a, Rational& b);

Rational ReadRational();

Rational& ReduceRational(Rational& a);

