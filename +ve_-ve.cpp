#include<iostream>

using namespace std;

int main()

{
    float a,b,c;
    cout<<"write a number here:\n";
    cin>>a;

    if(a>=0)

    {
        cout<<"+ve no."<<endl;

    }

    else

    {
        cout<<"-ve no."<<endl;
         c=a++;
         b=++a;
       
        cout<<b;
        cout<<c;

    }
    return 0;
}