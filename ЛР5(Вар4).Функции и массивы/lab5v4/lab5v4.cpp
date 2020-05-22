// lab5v4.cpp : Defines the entry point for the console application.
//
/*
4. 	Написать функцию для удаления строки из двумерного массива
	Оставшиеся строки должны быть расположены плотно, недостающие элементы заменяются 0.
	С помощью разработанных функций исключить из массива строки с номерами от А до В.
*/

#include "stdafx.h"

void deleteRow(double arr[5][5], int rowNumber)
{
	if (rowNumber < 0 && rowNumber >= 5)
	{
		return;
	}

	if (rowNumber != 4)
	{
		for (int i = rowNumber; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				arr[i][j] = arr[i + 1][j];
			}
		}
	}

	for (int j = 0; j < 5; j++)
	{
		arr[4][j] = 0;
	}

}

void deleteRows
(
	double arr[5][5], 
	int fromRowNumber, 
	int toRowNumberInclusive
)
{
	for (int i = fromRowNumber; i <= toRowNumberInclusive; i++)
	{
		deleteRow(arr, i);
	}
}

int main()
{
	double a[5][5];
	std::cout << "Enter numbers: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cin >> a[i][j];
		}
	}
	int rowNumberFrom;
	int rowNumberTo;
	std::cout << "Enter delete string number from: ";
	std::cin >> rowNumberFrom;
	std::cout << "Enter delete string number to: ";
	std::cin >> rowNumberTo;
	deleteRows(a, rowNumberFrom, rowNumberTo);
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << a[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}


