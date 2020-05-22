#include <locale>
#include <iostream>
#include <conio.h>
#include <cstdio>
#include <Windows.h>
using namespace std;

typedef struct
{
    char fio [255];
    int year [4];
    int exam [3];
    float attestat;

} man;

void form(char sFileName[10],int KolZap)
{
    setlocale (LC_ALL,"RUSSIAN");
    int i;
    char* rejim="w";
    FILE *f;
    man s;
    if (KolZap==1)
    {
        rejim="a";
    }
    if ((f=fopen(sFileName,rejim))==NULL)
        exit(1);
    for (i=0; i<KolZap; i++)
    {
        cout <<"������� � � � - ";
        scanf ("%s",&s.fio);
        cout <<"������� ��� �������� - ";
        scanf ("%s",&s.year);
        cout <<"������ ������� - ";
        scanf ("%f",&s.exam);
        cout <<"������� ������� ����  - ";
        scanf ("%s",&s.attestat);
        cout <<endl;
        fwrite(&s,sizeof(man),1,f);
        if (ferror(f)!=NULL)
            exit(2);
    }
    fclose(f);
}
void vivod(char sFileName[255])
{
    FILE *f;
    man d;
    if ((f=fopen(sFileName, "r"))==NULL)
        exit(3);
    cout <<"File - "<<sFileName<<endl;
    while (!feof(f))
    {
        fread (&d,sizeof(man),1,f);
        if (!feof(f))
        {
            cout <<"============================\n";
            cout <<"� � �: "<<d.fio<<endl;
            cout <<"��� ��������: "<<d.year<<endl;
            cout <<"������ �������: "<<d.exam<<endl;
            cout <<"������� ���� ���������: "<<d.attestat<<endl;
            cout <<"============================\n";
        }
    }
    fclose(f);

}

void udalenie(char cFileIn[10], char cFileOut[10])
{
    man d;
    FILE *f1,*f2;
    char temp[40];
    if ((f1=fopen(cFileIn, "r"))==NULL)
        exit(4);
    if ((f2=fopen(cFileOut,"w"))==NULL)
        exit(5);
    cout << "������� � � � �� �������� - ";
    cin >> temp;

    while(1)
    {
        fread(&d,sizeof(man),1,f1);
        if (feof(f1))
            break;
        if (strcmp(d.fio, temp))
            fwrite (&d,sizeof(man),1,f2);
    }

    fclose(f2);
    fclose(f1);
}

int main(int argc, char** argv)
{
    int n;
    setlocale(LC_ALL,"RUSSIAN");
    cout <<"������� ���-�� �������: - ";
    cin>>n;
    cout <<endl;
    form("f1.dat",n);
    vivod("f1.dat");
    udalenie("f1.dat","f2.dat");
    cout <<"����� ��������:\n";
    vivod("f2.dat");
    getch();
    n=1;
    system("cls");
    form ("f2.dat",n);
    cout <<"����� ����������:\n";
    vivod ("f2.dat");
    getch();
}

