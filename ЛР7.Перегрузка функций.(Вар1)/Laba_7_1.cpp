// �������� ������������� ������� � �������� ���������,
// ������� �� ��������
// �) ��� �������� ����� �����.
// �) ��� �������� ����������� �����.

#include <iostream> // ���������� ������������ ����� ������.
#include <cstdlib>

using namespace std; //������������� ������������ ���� std
//��������� ����������� �����.
//����������� ����� ������� �� ������ � �������������� ������
struct Complex
{
    float Real; //�������������� ����� ������������ �����
    float Mnim; //������ ����� ������������ �����
};
// ������� �������� ������������ �����
int Summ (int a, int b)
{
    int Summa = a + b;
    cout << "\n\n����� ����� ����� ����� = " << Summa << endl;
};

// ������� �������� ����������� �����
Complex Summ (Complex a, Complex b)
{
    Complex Summa;
    Summa.Real=a.Real + b.Real;
    Summa.Mnim = a.Mnim + b.Mnim;
    cout << "\n\n����� ����������� ����� ����� = " << Summa.Real << "+i" << Summa.Mnim << endl;
}
int main ()
{
//������� ���� � ������� (�����)
    setlocale (LC_ALL,"RUS");
//���� ����� �����
    int Chislo1;
    int Chislo2;
    cout << "\n������� ������ ����� ����� ";
    cin >> Chislo1;
    cout << "\n������� ������ ����� ����� ";
    cin >> Chislo2;
//���� ������������ ����� 1
    Complex CompChislo1;
    cout << "\n������� �������������� ����� ������� ������������ ����� " ;
    cin >> CompChislo1.Real;
    cout << "\n������� ������ ����� ������� ������������ ����� " ;
    cin >> CompChislo1.Mnim;
//���� ������������ ����� 2
    Complex CompChislo2;
    cout << "\n������� �������������� ����� ������� ������������ ����� " ;
    cin >> CompChislo2.Real;
    cout << "\n������� ������ ����� ������� ������������ ����� " ;
    cin >> CompChislo2.Mnim;
//���������� ���������� �������.
    Summ (Chislo1, Chislo2);
    Summ (CompChislo1, CompChislo2);
//system ("Pause");
    return 0;
}
