#ifndef __FRACTION_H
#define __FRACTION_H

#include	<iostream>

class Fraction
{

public:

	Fraction(int numerator = 0, int denominator = 1) :m_numerator{ numerator }, m_denominator{ denominator }
	{
	};


	void print();
	friend	Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend	Fraction operator*(const Fraction& f1, int number);
	friend	Fraction operator*(int number, const Fraction& f1);


private:
	int m_numerator;
	int m_denominator;
};

#endif
