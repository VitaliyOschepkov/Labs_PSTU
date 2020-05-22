#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Russian");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int *A = new int [size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << "  ";
    }
    cout << endl;
    int n;
    cout << "Номер удаляемого элемента: ";
    cin >> n;
    for(int i = n - 1; i < size - 1; i++)
    {
        A[i] = A[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "  ";
    }
    cout << endl;
    cout << "Номер вставляемого элемента: ";
    cin >> n;
    n = n-1;
    for(int i = size; i > n; i--)
    {
        A[i] = A[i - 1];
    }
    size++;
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "  ";
    }
    cout << endl;
    delete [] A;
    return 0;
}
