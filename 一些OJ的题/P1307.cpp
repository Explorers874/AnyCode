/*
洛谷P5015：标题统计
题目链接：https://www.luogu.com.cn/problem/P5015
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m;//定义一个字符串
    int cnt=0;//计数器（答案），需要初始化
    getline(cin,m);//使用 cstring 头文件中的 getline 读取字符串（虽然我已经用了万能头
    for(int i=0;i<=m.length()+1;i++)//for循环：由于下标是从0开始，则 int i=0; 。通过 m.length()+1 获取字符串长度
    {
        if(m[i]>=48&&m[i]<=57||m[i]>=65&&m[i]<=90||m[i]>=97&&m[i]<=122)//判断：ASCII码是否在数字、大小写字母的范围内
        {
            cnt++;//增加
        }
    }
    cout<<cnt;
    return 0;//结束
}