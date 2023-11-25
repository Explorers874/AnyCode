/*
洛谷P1909：买铅笔
题目链接：https://www.luogu.com.cn/problem/P1909
*/    
#include<bits/stdc++.h>
using namespace std;
long long n,a1,a2,b1,b2,c1,c2,pen1,pen2,pen3,x[3];//本来我不想用全局变量的，但是不行，用了局部变量就WA，我也不知道为什么
/*
n是需要的铅笔数量
a1,b1,c1分别是三种铅笔的每盒的数量
a2,b2,c2分别是三种铅笔的每盒的价格
pen1,pen2,pen3分别是三种铅笔达成条件后需要的数量    
数组x是三种铅笔的钱数
*/
int main()
{
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    while(pen1<n)//while循环：计算总共需要的支数和钱数
    {
        pen1+=a1;//增加一盒
        x[0]+=a2;//增加一盒的钱
    }
    while(pen2<n)
    {
        pen2+=b1;
        x[1]+=b2;
    }
    while(pen3<n)
    {
        pen3+=c1;
        x[2]+=c2;
    }
    sort(x,x+3);//把钱排序
    cout<<x[0];
    return 0;//结束
}