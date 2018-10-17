#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class xyz
{
    int a;
    char abc[10],def;
    float b;
public:
    xyz()  // THIS IS A DEFAULT CONSTRUCTOR
    {
        a=10;
        strcpy(abc,"abcdefg");
        def='f';
        b=3.14;
    }
    xyz(int a1,float b1) // THIS IS A PARAMETERIZED CONSTRUCTOR
    {
        a= a1;
        b= b1;
        strcpy(abc,"abcdefg");
        def='f';
        b=3.14;
    }
};

void main()
{
    cout<<"Default constructor called!"<<endl;
    xyz x;  // for default constructor
    cout<<"Default parametrized called!"<<endl;
    xyz y(10,18.5);  //for parameterized constructor
    getch();
}
