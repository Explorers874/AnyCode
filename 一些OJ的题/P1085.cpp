/*
洛谷P1085：不高兴的津津
题目链接：https://www.luogu.com.cn/problem/P1085
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,maxx,day;
    /*
    a是学校上课时间
    b是妈妈安排上课时间
    maxx是最大上课时间
    day是最不高兴的天数
    */
    for(int i=1;i<=7;i++)//for循环：读入并计算不高兴的天数
    {
        cin>>a>>b;
        if(a+b>maxx&&a+b>8)//判断：是否大于最不高兴的时间且大于8小时
        {
            maxx=a+b;//更新最不高兴的时间
            day=i;//更新天数
        }
    }
    cout<<day;
    return 0;//结束
}