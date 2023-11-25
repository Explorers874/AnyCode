/*
洛谷P1125：笨小猴
题目链接： https://www.luogu.com.cn/problem/P1125

奋斗了整个下午，终于AC了…… :)
荣耀时刻：https://www.luogu.com.cn/record/129388445
*/
#include<bits/stdc++.h>
using namespace std;
bool pd(int x)//自定义函数：判断质数(其实不用这么麻烦，关键是我调试了很多遍……)
{
    if(x==0||x==1)//特判：是否为0或1
    {
        return false;//直接返回否
    }
    if(x==2)//特判：唯一一个是偶数的质数2
    {
        return true;//直接返回是
    }
    for(int i=2;i<=sqrt(x);i++)//for循环：判断质数
    {
        if(x%i==0)//判断：除尽了
        {
            return false;//直接返回否
        }
    }
    return true;//撑住了考验：在遍历中没有除尽：返回是
}
int main()
{
    ios::sync_with_stdio(false);
    char c[1000];
    int maxx=0,minx=1000,ans[26]={0},d;
    /*
    字符串c是是单词(虽然不用开这么大)
    maxx是最大值，minx是最小值(需要初始化，因为还要进行数据更新)
    数组ans储存每个字母的个数(需要初始化，因为要进行累加)
    d是最大值与最小值的差
    */
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++)//for循环：遍历并累加数量
    {
        ans[c[i] /*这个字母*/ -97 /*减去第一个字母a*/ ]++;//累加
    }
    for(int i=0;i<26;i++)//for循环：遍历并统计
    {
        if(maxx<ans[i])//判断：比最大值还要大
        {
            maxx=ans[i];//数据更新
        }
        if(ans[i]<minx&&ans[i]!=0)//判断：比最小值还要小，而且不为0(因为没有这个字母)
        {
            minx=ans[i];//数据更新
        }
    }
    d=maxx-minx;//计算差值
    if(pd(d)==true)//判断：[见10-28行]返回了是：是质数
    {
        cout<<"Lucky Word"<<endl<<d;
    }
    if(pd(d)==false)//判断：[见10-28行]返回了否：不是质数
    {
        cout<<"No Answer"<<endl<<0;
    }
    return 0;//结束
}