#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout<<"enter 3 numbers here:\n";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<"a is greatest";
    }

    else
    {
        if(b>a && b>c)
        {
            cout<<"b is greatest";
        }
        else
        {
            cout<<"c is greatest";
        }
    }

}