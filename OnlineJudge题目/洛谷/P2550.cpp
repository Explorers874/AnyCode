#include<iostream>
using namespace std;
int main()
{
    int a,b[7]={0},c,d[8]={0},e=0;
    cin>>a;
    for(int i=1;i<=7;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=a;i++)
    {
        e=0;
        for(int j=1;j<=7;j++)
        {
            cin>>c;
            for(int x=1;x<=7;x++)
            {
                if(c==b[x])
                {
                    e++;
                    break;
                }
            }
        }
        d[e]++;
    }
    for(int i=7;i>=1;i--)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}