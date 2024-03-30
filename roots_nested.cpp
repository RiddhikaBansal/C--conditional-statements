#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d;

    cout<<"enter a,b,c here:\n";
    cin>>a>>b>>c;

    d=(b*b)-(4*a*c);

    if(d=0)
    {
        cout<<"roots are real and equal"<<endl;

    }
    else
    {
        if(d>0)
        {
            cout<<"roots are real and unequal"<<endl;
        }

        else
        {
            cout<<"roots are imaginery"<<endl;
        }
    }
return 0;

}