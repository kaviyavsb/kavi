#include<iostream>
using namespace std;
int main()
{
int a=88,count=0,b;
{
b=a;
while(b>0)
{
count++;
b/=10;
}
cout<<count;
}
