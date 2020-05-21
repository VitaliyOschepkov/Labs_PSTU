// lab1v1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void part1()
{
	float fA = 1000.0;
	float fB = 0.0001;
	float fR1 = pow(fA + fB, 2);
	float fR2 = pow(fA, 2) + 2 * fA * fB;
	float fR3 = fR1 - fR2;
	float fR4 = pow(fB, 2);
	float fR = fR3 / fR4;
	// https://stackoverflow.com/a/33856042
	// https://en.cppreference.com/w/cpp/io/manip/setprecision
	std::cout
		<< std::setprecision(std::numeric_limits<float>::digits10)
		<< std::fixed
		<< "float result:\t"
		<< fR
		<< std::endl;

	double dA = 1000.0;
	double dB = 0.0001;
	double dR1 = pow(dA + dB, 2);
	double dR2 = pow(dA, 2) + 2 * dA * dB;
	double dR3 = dR1 - dR2;
	double dR4 = pow(dB, 2);
	double dR = dR3 / dR4;
	std::cout
		<< std::setprecision(std::numeric_limits<double>::digits10)
		<< std::fixed
		<< "double result:\t"
		<< dR
		<< std::endl;
}

void part2()
{
	int n;
	int m;
	int r;

	n = 10;
	m = 3;
	std::cout << n << '\t';
	std::cout << m << '\t';
	r = n++ + m;
	std::cout << r << '\t';
	std::cout << n << '\t';
	std::cout << m << '\t';
	std::cout << std::endl;

	n = 3;
	m = 2;
	std::cout << n << '\t';
	std::cout << m << '\t';
	r = m-- > n;
	std::cout << r << '\t';
	std::cout << n << '\t';
	std::cout << m << '\t';
	std::cout << std::endl;

	n = 0;
	m = 2;
	std::cout << n << '\t';
	std::cout << m << '\t';
	r = n-- >m;
	std::cout << r << '\t';
	std::cout << n << '\t';
	std::cout << m << '\t';
	std::cout << std::endl;
}

int main()
{
	part1();

	part2();

	return 0;
}
