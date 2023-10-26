/*
洛谷P4414：ABC
题目链接：https://www.luogu.com.cn/problem/P4414

这是一道COCI 2006-2007的入门题
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[5];
    char s;
    /*
    数组num存储数据
    字符s获取排序序列
    */
    cin>>num[1]>>num[2]>>num[3];
    sort(num+1,num+4);//排序
    for(int i=1;i<=3;i++)//for循环：读入序列
    {
        cin>>s;
        if(s=='A')//判断：序列的标识
        {
            cout<<num[1]<<" ";
        }
        if(s=='B')
        {
            cout<<num[2]<<" ";
        }
        if(s=='C')
        {
            cout<<num[3]<<" ";
        }
    }
    return 0;//结束
}