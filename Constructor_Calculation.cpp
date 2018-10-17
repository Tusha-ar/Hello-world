#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


class calc
{
private:
    float ans;
public:
    calc(float a, int b)        //parameterized constructor
    {
        ans=pow(a,b);
        cout<<"ANSWER: "<<ans;
    }
    
};

void main()
{
    float a;
    int b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    calc c(a,b);        //calling constructor
    getch();
}
