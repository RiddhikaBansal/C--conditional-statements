#include<iostream>
using namespace std;
int main()
{
   float dis,undis;

   cout<<"enter your undiscounted bill:\n";
   cin>>undis;

   if(undis>=5000)
   {
    dis=undis-(undis*20/100.0);
    cout<<dis;
   } 
   else
   {
    if (undis>=2000 && undis<=5000)
    {
        dis=undis-(undis*10/100.0);
        cout<<dis;
    }
    else
    {
        dis=undis-(undis*5/100.0);
        cout<<dis;
    }
    
    return 0;
    
   }
}