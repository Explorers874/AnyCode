/*
洛谷P1420：最长连号
题目链接：https://www.luogu.com.cn/problem/P1420

这个题目啥也不是，就是个模拟题……
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num[10000],cnt=1,ans=0;
    /*
    n是一共有几个数字
    数组num存储输入的数据
    cnt累加连续的个数
    ans表示答案
    */
    cin>>n;
    for(int i=1;i<=n;i++)//for循环：读入数据
    {
        cin>>num[i];
    }
    for(int i=1;i<=n;i++)//for循环：计算
    {
        if(num[i]+1==num[i+1])//判断：这个数+1=下一个数（连号）
        {
            cnt++;//增加
        }
        else//判断：连号断了
        {
            cnt=1;//归一
        }
        if(cnt>ans)//判断：求最大值
        {
            ans=cnt;//数据更新
        }
    }
    cout<<ans;
    return 0;//结束
}