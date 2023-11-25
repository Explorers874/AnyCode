/*
洛谷P1035：级数求和
题目链接：https://www.luogu.com.cn/problem/P1035
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    double sum=0;//级数的总和，要初始化
    cin>>k;
    for(double i=1;i<=100000000/*给开亿点点就够了，反正用不完:)*/;++i/*此处要先加上*/)
    {
        sum=sum+1/i/*这个东西是分数（其实就是除法）*/;//累加起来
        if(sum>=k)//判断：总和>=k
        {
            cout<<i;
            return 0;//直接结束
        }
    }
}