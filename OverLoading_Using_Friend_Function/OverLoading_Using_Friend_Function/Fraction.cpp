#include "Fraction.h"

void Fraction::print()
{
	std::cout << m_numerator << "/" << m_denominator << "\n";
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator*(const Fraction& f1, int number)
{
	return Fraction(f1.m_numerator * number, f1.m_denominator);
}

Fraction operator*(int number, const Fraction& f1)
{
	return Fraction(f1.m_numerator * number, f1.m_denominator);
}