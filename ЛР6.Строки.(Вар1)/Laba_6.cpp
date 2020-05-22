#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int startSize = 256; //������������ ������ �������
    char str[startSize];
    cout << "������� ������ - " ;
    cin.getline(str, '.'); //��������� ������ �� �����
    char str_1[startSize]; //������� �������������� ������, ������� ����� ������� ��� ������� ������ (� ��� ����� �� �����)
    int j = 0; //������� ��� ����� str_1
    for (int i = 0; i < startSize; i++) //���� "�����" �� ���������� ������� (str) � ������������ ������� � ����� ������ (str_1), ��� ���� ������� ����������, � ���� ��������� �� �����, �� ���������� ������������ ���� � ������� �� �����
    {
        if (str[i] == ' ')
            continue;
        if (str[i] == '.')
        {
            str_1[j] = '\0';
            break;
        }
        str_1[j] = str[i];
        j++;
    }
    const int resSize = strlen(str_1); //������ ������� ���������������� ������� str_2
    char * str_2 = new char[resSize + 1]; //����������� ������� ������ ������, ��� ��� ������ ������� ������ (� GCC++ �����) ����� ���������-���������� (��������� �������� ����� ����������)
    for (int i = 0; i < resSize; i++) //������������ ������ str_1 ������ �������� � ������ str_2
    {
        str_2[i] = str_1[resSize - 1 - i]; //�.�. ��������� ������� str_1 ���������� ������, ������ � ����� - ������ � �.�.
    }
    str_2[resSize] = '\0'; //� ��������� ������� ������ ������������ ����
    if (!strcmp(str_1, str_2))
        cout << "������ ���������"; //������� strcmp() ���������� ��� �������, ���� ��� �����, �� ���������� 0, ����� �����, �������� �� 0 (�� ���� ��� ���������)
    else
        cout << "������ �� ���������";
    delete[] str_2; //������� ����������� ���������� ������ (����� ��� �������� �����)
    return 0;
}
