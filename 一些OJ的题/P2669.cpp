/*
洛谷P2669：金币
题目链接：https://www.luogu.com.cn/problem/P2669
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,k,coin,t;
    //ans是答案，k是天数，coin是每天可以获得的金币，t是可以获取coin个金币的天数
    cin>>k;
    coin=t=1;//初始化：它们的初始值是1（第一天）
    for(int i=1;i<=k;i++)//for循环：计算
    {
        ans=ans+coin;//把金币加起来
        t--;//天数减少一天：因为已经过去一天了
        if(t==0)//判断：要换下一部分的金币了
        {
            coin++;//增加金币
            t=coin;//增加天数
        }
    }
    cout<<ans;
    return 0;//结束
}