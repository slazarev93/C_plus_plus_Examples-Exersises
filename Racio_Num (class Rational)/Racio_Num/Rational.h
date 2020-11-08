#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;   
    string Name;        // It's an attempt to control, how many objects of class "Rational" has been created in a programm
    static int check;   // static field

public:
    Rational()                     // Default constructor 
    {
        numerator = 0;
        denominator = 1;
        Name = "Default";
    }
    Rational(int num, int den)     // Constructor with parametrs
    {
        setNumerator(num);
        setDenominator(den);
        Name = "Num" + to_string(check);    // Still trying to control creating objects of "Rational"
        check++;
    }

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }

    void setNumerator(int value)
    {
        numerator = value;
    }

    void setDenominator(int value)
    {
        if (value != 0)
            denominator = value;
        else
        {
            printf("Denominator can't be zero");
        }
    }

    void Print()
    {
        printf("%i / %i\n", numerator, denominator);
    }

    void Println()
    // This function is like a previous one [Print()]
    // But without line break
    {
        printf("%i / %i", numerator, denominator);
    }

    int GCD(int a, int b)
    // Greatest Common divisor
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

    Rational& Reduce()
    {
        int div = GCD(numerator, denominator);
        numerator /= div;
        denominator /= div;
        if (denominator < 0)
        {
            denominator *= -1;
            numerator *= -1;
        }
        return *this;
    }

    float Real()
    {
        return { static_cast<float>(numerator) / denominator };
        //return { (float)numerator / denominator };
    }

    ~Rational()     // Destructor is not required here
    {
        //printf("Destructor %s\n", Name.c_str());
        std::cout << "Destructor " << Name << std::endl;
    }
};

Rational operator+(Rational& a, Rational& b); // operator overloading

Rational operator-(Rational& a, Rational& b);

Rational operator*(Rational& a, Rational& b);

Rational operator/(Rational& a, Rational& b);

bool operator<(Rational& a, Rational& b);

bool operator<=(Rational& a, Rational& b);

bool operator>(Rational& a, Rational& b);

bool operator>=(Rational& a, Rational& b);

bool operator==(Rational& a, Rational& b);

bool operator!=(Rational& a, Rational& b);



