/*
洛谷P8717：成绩分析
题目链接：https://www.luogu.com.cn/problem/P8717
这是一道来自 2020蓝桥杯省赛A、B组F题 的模拟题
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,score[10000],maxx=0,minx=1000,t=0;
    double avg;
    /*
    n是数据的数量
    数组score存储分数
    maxx存储最高分
    minx存储最低分：由于使用数据更新法计算最低分，所以要把数据开大
    t存储总分：用于计算平均分，需要初始化
    avg存储平均分
    */
    cin>>n;
    for(int i=1;i<=n;i++)//for循环：读入分数
    {
        cin>>score[i];
        t=t+score[i];//总分增加
    }
    for(int i=1;i<=n;i++)//for循环：计算最高分和最低分
    {
        if(score[i]>maxx)//判断：这个分数比最高分还要高
        {
            maxx=score[i];//数据更新
        }
        if(score[i]<minx)//判断：这个数据比最低分还要低
        {
            minx=score[i];//数据更新
        }
    }
    avg=1.0*t/n;//计算平均分
    printf("%lld\n%lld\n%.2lf",maxx,minx,avg);
    //   最高分 换行 最低分 换行 保留2位小数的平均分
    return 0;//结束
}