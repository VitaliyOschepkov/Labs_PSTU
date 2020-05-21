// lab2partA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void task1()
{
	// Найти сумму целых положительных чисел, кратных 3 и меньших 200.
	int result = 0;
	for (size_t i = 0; i < 200; i++)
	{
		if (i % 3 == 0)
		{
			result += i;
		}
	}

	std::cout << "task1:\t" << result << std::endl;
}

void task2()
{
	// Найти сумму целых положительных четных чисел, меньших 100.
	int result = 0;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			result += i;
		}
	}
	std::cout << "task2:\t" << result << std::endl;
}

void task3()
{
	// Найти сумму целых положительных нечетных чисел, меньших 200.  
	int result = 0;
	for (size_t i = 0; i < 100; i++)
	{
		if (!(i % 2 == 0))
		{
			result += i;
		}
	}
	std::cout << "task3:\t" << result << std::endl;
}

void task4()
{
	// Найти сумму целых положительных чисел, больших 20, меньших 100 и кратных 3
	int result = 0;
	for (size_t i = 21; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			result += i;
		}
	}
	std::cout << "task4:\t" << result << std::endl;
}

int main()
{
	task1();
	task2();
	task3();
	task4();

	return 0;
}

