/*
洛谷P5015：标题统计
题目链接：https://www.luogu.com.cn/problem/P5015
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m;
    int cnt=0;
    /*
    m是获取的标题
    cnt是总数，需要初始化
    */
    getline(cin,m);
    for(int i=0;i<=m.length()+1;i++)//for循环：判断并计算
    {
        if(m[i]>=48&&m[i]<=57||m[i]>=65&&m[i]<=90||m[i]>=97&&m[i]<=122)//判断：是否在数字、字母之间
        {
            cnt++;//增加
        }
    }
    cout<<cnt;
    return 0;//结束
}