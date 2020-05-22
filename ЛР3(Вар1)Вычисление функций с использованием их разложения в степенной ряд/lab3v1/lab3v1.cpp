// lab3v1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

double fact(int n)
{
	return n == 1 ? 1 : n*fact(n - 1);
}

int main()
{
	const double a = 0.1;
	const double b = 1.0;
	const int k = 10;
	const int n = 10;
	const double e = 0.0001;
	const double h = (b - a) / k;
	for (auto i = a; i <= roundf(i * 10) / 10; i += h)
	{
		double sn = 0;
		double se = 0;
		double sePrev = 0;
		for (auto j = 1; j <= n; j++)
		{
			sn += (pow(log(3), j) / fact(j)) * pow(i, j);
		}
		double se1 = 0;
		auto ne = 1;
		do
		{
			sePrev = se1;
			se1 = (pow(log(3), ne) / (double)fact(ne)) * pow(i, ne);
			se += se1;
			ne++;
		} while (abs(se1 - sePrev) > e);
		auto y = pow(3, i);
		std::cout
			<< std::setprecision(4)
			<< std::fixed
			<< "x = " << i
			<< "\tSN = " << sn
			<< "\tSE = " << se
			<< "\ty = " << y
			<< std::endl;
	}

	return 0;
}

