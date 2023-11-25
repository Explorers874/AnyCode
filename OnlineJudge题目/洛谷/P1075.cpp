/*
洛谷P1075：最大公约数
题目链接：https://www.luogu.com.cn/problem/P1075
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //要进行分解的数
    cin>>n;
    for(int i=2;i<n;i++)//for循环：向上枚举
    {
        if(n%i==0)//判断：是否整除
        {
            cout<<i;
            return 0;//直接结束
        }
    }
    /*
    众所周知，质数的定义是：
    一个数除了它本身和1，没有任何因数，这个数是质数。
    所以在循环时要先排除1，所以 int i=2;
    
    众所周知：一个数的 第一小的因数×第一大的因数=这个数，就是：
    设这个数 G 的因数有：a,b,c,d,e,f
    则 G= a*f = b*e = c*d
    所以，在向上枚举的时候，如果找到了可以整数的最小因数，用这个数÷最小因数就是结果
    */
}