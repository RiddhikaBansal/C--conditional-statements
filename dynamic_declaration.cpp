#include <iostream>
using namespace std;
int main()
{
int a=10,b=5;
if(true)
 {
 int c=a+b;
 cout<<c<<endl;
 }
 {
int d=a-b;
if(true)
 {
 cout<<d<<endl;
 } 
 }
if(int e=a*b)
 {
 cout<<e<<endl;
 }
}
//if a variable is declared inside a block, then it will be deleted from the memory at the end of block