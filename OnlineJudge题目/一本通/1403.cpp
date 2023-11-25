#include<iostream>
#include<cmath>
using namespace std;
int n;
bool check(int a)
{
    if(a<2||a+2<2)  return false;
    if(a==2)  goto next;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)  return false;
    }
    next:
        if(a+2>n)  return false;
        for(int i=2;i<=sqrt(a+2);i++)
        {
            if((a+2)%i==0)  return false;
        }
    return true;
}
int main()
{
    bool flag=true;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(check(i))
        {
            flag=false;
            cout<<i<<' '<<i+2<<endl;
        }
    }
    if(flag)  cout<<"empty";
    return 0;
}