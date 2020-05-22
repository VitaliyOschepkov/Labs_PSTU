// lab4v1.cpp : Defines the entry point for the console application.
//
/*
1)	Сформировать одномерный массив целых чисел, используя датчик случайных чисел.
2)	Распечатать полученный массив.
3)	Удалить элемент с номером К.
4)	Добавить после каждого четного элемента массива эле-мент со значением 0.
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

void delete_element_from_array(int *array, int pos)
{
	// По условию задачи сдвигать элементы необязательно.
	array[pos] = 0;
}

void do_very_difficult_unspecified_task(int array[], int length)
{
	// По условию задачи сдвигать элементы необязательно.
	// Ноль это четное число!
	for (size_t i = 0; i < length - 1; i++)
	{
		if (array[i] % 2 == 0)
		{
			array[i + 1] = 0;
		}
	}
}

int main()
{
	// https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 100);
	const int real_n = 1000;
	
	int arr[real_n];
	int fake_n;
	std::cout << "Enter N: ";
	std::cin >> fake_n;
	for (int i = fake_n - 1; i >= 0; i--)
	{
		arr[i] = dis(gen);
	}
	print_array(arr, fake_n);
	int k;
	std::cout << "Enter k: ";
	std::cin >> k;
	delete_element_from_array(arr, k);
	print_array(arr, fake_n);
	do_very_difficult_unspecified_task(arr, fake_n);
	print_array(arr, fake_n);

    return 0;
}

