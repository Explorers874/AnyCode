/*
在VSCode里面总是给我弹出 Error while processing 的错误，我也不知道怎么回事，但是可以运行（code-runner扩展），也可以编译（g++ P5681.cpp -o P5681）
洛谷P5681：面积
题目链接：https://www.luogu.com.cn/problem/P5681
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,s1,s2;
    //a是正方形的边长，b和c是矩形的长和宽，s1是正方形的面积，s2是矩形的面积
    cin>>a>>b>>c;
    s1=a*a;//计算正方形面积（边长×边长）
    s2=b*c;//计算长方形面积（长×宽）
    if(s1>s2)//判断/比较面积的大小
    {
        cout<<"Alice";//输出
    }
    else
    {
        cout<<"Bob";
    }
    return 0;//结束
}