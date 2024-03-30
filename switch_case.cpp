#include<iostream>
using namespace std;
int main()
{
    int a;

    cout<<"enter number here:\n";
    cin>>a;

    switch(a)
    {
        case 1: cout<<"mon"<<endl;
            break;
        case 2: cout<<"tue"<<endl;

        case 3: cout<<"wed"<<endl;

        default: cout<<"invalid"<<endl;

    }

    return 0;}