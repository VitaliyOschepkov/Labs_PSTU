// lab2v20partB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

double func(double n)
{
	return exp(n) * pow(100.0, pow(-n, 2));
}


int main()
{
	double eps = 1E-4;
	double s = 0;
	double pr = 1.0;
	int i = 0;
	double a = 0;
	double prev_s = 100500.0;
	while (fabs(prev_s - s)  > eps)
	{
		prev_s = s;
		s += func(i);
		std::cout << "i:\t" << i << " s:\t" << s << std::endl;
		i++;
	}
    return 0;
}

