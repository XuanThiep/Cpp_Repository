#include	<iostream>
#include	"Fraction.h"


int main()
{
	std::cout << "Hello World! This is overloading using friend function\n";
	Fraction f1(2, 4);
	f1.print();
	Fraction f2(3, 2);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();
	 
	Fraction f4 = 2 * f1;
	f4.print();

	Fraction f5 = f1 * f2 * Fraction(4, 5) * 4;
	f5.print();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
