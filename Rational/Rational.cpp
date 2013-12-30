#include "Ratinal.h"
#include <sstream> //to use toString to convert numbers to string

Rational::Rational()
{
   numerator=0; 
   denominator=1; 
}

Rational::Rational(int numerator, int denominator)
{
int factor = gcd(numerator,denominator);
this->numerator = ((denominator > 0) ? 1 : -1) * numerator / factor;
this->denominator = abs(denominator) / factor;
}

int Rational::getNumberator() const 
{
    return numerator; 
}

int Rational::getDenominator() const
{
    return denominator; 
}

// Find GCD of two numbers

{
int n1 = abs(n);
int n2 = abs(d);
int gcd = 1;

for (int k = 1; k <= n1 && k <= n2; k++)
{
if (n1 % k == 0 && n2 % k == 0)
gcd = k;
}

return gcd;
}
