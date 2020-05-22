// Написать перегруженные функции и основную программу,
// которая их вызывает
// а) Для сложения целых чисел.
// б) Для сложения комплексных чисел.

#include <iostream> // Библиотека стандартного ввода вывода.
#include <cstdlib>

using namespace std; //использования пространство имен std
//Описываем комплексное число.
//Комплексное число состоит из мнимой и действительной частей
struct Complex
{
    float Real; //Действительная часть комплексного числа
    float Mnim; //Мнимая часть комплексного числа
};
// Функция сложения вещественных чисел
int Summ (int a, int b)
{
    int Summa = a + b;
    cout << "\n\nСумма целых чисел равна = " << Summa << endl;
};

// Функция сложения комплексных чисел
Complex Summ (Complex a, Complex b)
{
    Complex Summa;
    Summa.Real=a.Real + b.Real;
    Summa.Mnim = a.Mnim + b.Mnim;
    cout << "\n\nСумма комплексных чисел равна = " << Summa.Real << "+i" << Summa.Mnim << endl;
}
int main ()
{
//Русский язык в консоли (вывод)
    setlocale (LC_ALL,"RUS");
//Ввод целых чисел
    int Chislo1;
    int Chislo2;
    cout << "\nВведите первое целое число ";
    cin >> Chislo1;
    cout << "\nВведите второе целое число ";
    cin >> Chislo2;
//Ввод комплексного числа 1
    Complex CompChislo1;
    cout << "\nВведите действительную часть первого комплексного числа " ;
    cin >> CompChislo1.Real;
    cout << "\nВведите мнимую часть первого комплексного числа " ;
    cin >> CompChislo1.Mnim;
//Ввод комплексного числа 2
    Complex CompChislo2;
    cout << "\nВведите действительную часть второго комплексного числа " ;
    cin >> CompChislo2.Real;
    cout << "\nВведите мнимую часть второго комплексного числа " ;
    cin >> CompChislo2.Mnim;
//Выполнение перегрузки функций.
    Summ (Chislo1, Chislo2);
    Summ (CompChislo1, CompChislo2);
//system ("Pause");
    return 0;
}
