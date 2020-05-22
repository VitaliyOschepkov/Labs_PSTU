#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
struct elem
{
    int data;
    elem *next;
};

elem *create(void)
{
    int n;
    elem *p,*q;
    p=NULL;
    cout<<"Введите n:";
    cin>>n;
    if(n>0)
    {
        p=new elem;
        int i;
        cin>>p->data;
        q=p;
        for(i=1; i<n; i++)
        {
            q->next=new elem;
            q=q->next;
            cin>>q->data;
        }
        q->next=NULL;
    }
    return p;
}

void out(elem *p)
{
    elem *q;
    if(p==NULL)
        cout<<" Список пуст "<<endl;
    else
    {
        q=p;
        while (q!=NULL)
        {
            cout<<q->data<<" ";
            q=q->next;
        }
        cout<<endl;
    }
}

elem *udalenie(elem*p,elem*q)
{
    elem*w=p;
    while(w->next!=q)
        w=w->next;
    w->next=q->next;
    delete q;
    return p;
}

elem* vstavka(elem *p)
{
    int k,i,i1;
    elem *q,*q1,*q2,*q3;
    cout<<"Введите номер вставки"<<endl;
    cin>>i1;
    cout<<"Введите элемент: ";
    q1=new elem;
    cin>>q1->data;
    if(i1==1)
    {
        q1->next=p;
        p=q1;
    }
    else
    {
        q=p;
        for(i=2; i<i1; i++)
            q=q->next;
        q2=q->next;
        q->next=q1;
        q1->next=q2;
    }
    out(p);
    return p;
}

void vvod(elem *p,char*s)
{
    int t;
    FILE *f;
    f=fopen(s,"w+");
    elem *q;
    q=p;
    while(q!=NULL)
    {
        t=q->data;
        fwrite(&t,sizeof(int),1,f);
        q=q->next;
    }
    rewind(f);
    fclose(f);
}

elem* destr(elem *p)
{
    elem *q=p,*w;
    while(q->next!=NULL)
    {
        q=p->next;
        udalenie(p,q);
    }
    delete q;
    p=NULL;
    return p;
}

elem* vivid(char *s)
{
    FILE *f;
    int a;
    elem *q,*p,*q1;
    f=fopen(s,"r");
    p=new elem;
    fread(&a,sizeof(int),1,f);
    p->data=a;
    p->next=NULL;
    q=p;
    fread(&a,sizeof(int),1,f);
    while(!feof(f))
        if(!feof(f))
        {
            q->next=new elem;
            q1=new elem;
            q1=q;
            q=q->next;
            q1->next=q;
            q->data=a;
            fread(&a,sizeof(int),1,f);
        }
    q->next=NULL;
    rewind(f);
    fclose(f);
    return p;
}


int main()
{
     setlocale(LC_CTYPE,"Russian");
    elem *p,*q;
    int n;
    p=create();
    cout<<" Список: ";
    out(p);
    cout<<"Введите номер элем-та на удаление: ";
    cin>>n;
    q=p;
    for(int i=1; i<n; i++)
        q=q->next;
    udalenie(p,q);
    out(p);
    p=vstavka(p);
    char *s="f.txt";
    vvod(p,s);
    p=destr(p);
    cout<<"Деструктивный список: ";
    out(p);
    cout<<"Is file: ";
    out(vivid(s));
    getch();
}
