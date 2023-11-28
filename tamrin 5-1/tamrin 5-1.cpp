// tamrin 5-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double sal, taxR, tax, fins;
	std::cout << "Enter the sallery: ";
	std::cin >> sal;
	if (sal < 6000000) {
		taxR = 0;
	}
	else if (sal < 8000000) {
		taxR = 0.05;
	}
	else if (sal < 10000000) {
		taxR = 0.1;
	}
	else if (sal < 14000000) {
		taxR = 0.15;
	}
	else if (sal < 18000000) {
		taxR = 0.2;
	}
	else if (sal < 25000000) {
		taxR = 0.25;
	}
	else {
		taxR = 0.35;
	}
	tax = sal * taxR;
	fins = sal - tax;
	std::cout << "sal: " << sal << std::endl;
	std::cout << "Tax: " << tax << std::endl;
	std::cout << "Final sal: " << fins << std::endl;

	return 0;
}
