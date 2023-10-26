/*
洛谷P1089：津津的储蓄计划
题目链接：https://www.luogu.com.cn/problem/P1089
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int money,costs,mother;
    /*
	money是津津手上的钱
	costs是每月的开支
	mother是存给妈妈的钱
	*/
    for(int i=1;i<=12;i++)//for循环:读入、计算
    {
        money=money+300;//每月给300元
        cin>>costs;
        money=money-costs;//减去开支
        if(money<0)//判断:没钱了
        {
            cout<<"-"<<i;//输出月份
            return 0;//直接结束
        }
        mother=mother+money/100;//整除100存给妈妈
        money=money%100;//取模100为剩下的钱
    }
    money=money+mother*1.2;//把自己剩下的和妈妈存的加起来
    cout<<money;
    return 0;//结束
}
