#include<iostream>
using namespace std;
int main()
{
    int option;
    
    cout<<"enter choice here:";
    cin>>option;
    
    int a,b,c;

    cout<<"write digit here:\n";
    cin>>a>>b;

    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    }

    cout<<"result is " <<c<<endl;

    return 0;

}