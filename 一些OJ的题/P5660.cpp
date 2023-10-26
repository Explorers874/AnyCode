/*
洛谷P5660：数字游戏
题目链接：https://www.luogu.com.cn/problem/P5660
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[10]={0};//定义一个字符串并初始化
    int cnt=0;//定义一个累积器并初始化
    for(int i=1;i<=8;i++)//for循环：输入8个字符
    {
        cin>>num[i];//读入
    }
    for(int i=1;i<=8;i++)//for循环：遍历字符串
    {
        if(num[i]=='1')//判断：是否是'1' 注意!：这是一个字符类型，要加单引号！
        {
            cnt++;//增加
        }
    }
    cout<<cnt;
    return 0;//结束
}