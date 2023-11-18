#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int LEN=500;
int a[LEN],b[LEN],ans[LEN];
void read(int a[])
{
    char s[LEN+1];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;++i)
    {
        a[len-i-1]=s[i]-'0';
    }
}
void print(int a[])
{
    int av;
    for(av=LEN-1;av>=1;--av)
    {
        if(a[av]!=0)  break;
    }
    for(true;av>=0;--av)
    {
        printf("%c",a[av]+'0');
    }
}
void add(int a[],int b[],int c[])
{
    for(int i=0;i<LEN-1;++i)
    {
        c[i]+=a[i]+b[i];
        if(c[i]>=10)
        {
            c[i+1]+=1;
            c[i]-=10;
        }
    }
}
int main()
{
    read(a);
    read(b);
    add(a,b,ans);
    print(ans);
    return 0;
}