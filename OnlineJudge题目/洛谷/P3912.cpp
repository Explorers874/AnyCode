#include<iostream>
#include<map>
#include<cmath>
using namespace std;
bool m[100000005];
typedef long long ll;

inline ll read()
{
    ll x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}

void write(int x)
{
    if(x<0)
        putchar('-'),x=-x;
    if(x>9)
        write(x/10);
    putchar(x%10+'0');
    return;
}

int main()
{
    ll n,ans=0;
    n=read();
    m[1]=1;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(m[i]==0) {
           for(int j=i*i;j<=n;j+=i)
             m[j]=1;
        }
    }
    for(int i=1;i<=n;i++) {
       if(m[i]==0) ans++;
    }  
    write(ans);
    return 0;
}