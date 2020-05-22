// lab4v11.cpp : Defines the entry point for the console application.
//
/*
1)	Сформировать одномерный массив целых чисел, используя датчик случайных чисел.
2)	Распечатать полученный массив.
3)	Удалить 5 последних  элементов массива.
4)	Добавить в начало массива 3 элемента с значением M[ I+1 ]+2.
5)	Распечатать полученный массив.
*/
#include "stdafx.h"

void print_array(int array[], int length)
{
	std::cout << "[";
	for (int i = 0; i < length - 1; i++)
	{
		std::cout << array[i] << ", ";
	}
	std::cout << array[length - 1] << "]" << std::endl;
}

void delete_last_5_elements(int array[], int length)
{
	// По условию задачи сдвигать элементы необязательно.
	for (int i = length - 1; i >= length - 1 - 4; i--)
	{
		array[i] = 0;
	}
}

void add(int array[], int length)
{
	// По условию задачи сдвигать элементы необязательно.
	for (size_t i = 0; i < 3 + 1; i++)
	{
		if (i + 1 > length) 
		{
			break;
		}
		array[i] = array[i+1]+2;
	}
}
int main()
{
	// https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 100);
	int real_n;
	std::cout << "Enter N: ";
	std::cin >> real_n;
	int *p_darr = new int[real_n];
	for (size_t i = 0; i < real_n; i++)
	{
		p_darr[i] = dis(gen);
	}
	print_array(p_darr, real_n);
	delete_last_5_elements(p_darr, real_n);
	print_array(p_darr, real_n);
	add(p_darr, real_n);
	print_array(p_darr, real_n);
	delete[] p_darr;
    return 0;
}

