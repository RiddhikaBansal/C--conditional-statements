#include<iostream>
using namespace std;
int main()
{
    int a;

    cout<<"enter age here\n";
    cin>>a;

    if(a<16 || a>50)
    {
        cout<<"not eligible for job"<<endl;
    }
    else
    {
        cout<<"eligible"<<endl;
    }
    return 0;
    
}