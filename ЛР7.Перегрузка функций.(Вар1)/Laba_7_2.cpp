#include <iostream>
#include <cstdlib>

using namespace std;

int sum (int k, ...)
{
    int *p = &k; //��������� ��������� �� �������� k
    int s=0;
    for ( ; k!=0; k--)
        s+=*(++p);
    return s;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"\n�����(-3,4,6)= "<<sum(3,-3,4,6); //������� ����� - 3+4+6
    cout<<"\n�����(63,11,5,22,3,14,-8)= "<<sum(7,63,11,5,22,3,14,-8);
//������� ����� 63+11+5+22+3+14+-8
    cout<<"\n�����(5,63,23,9,-2,32,4,12,8,75,-21)= "<<sum(11,5,63,23,9,-2,32,4,12,8,75,-21);
//������� ����� 5,63,23,9,-2,32,4,12,8,75,-21
    cin.get();
    return 0;
}
