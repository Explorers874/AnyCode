/*
洛谷P3954：成绩
题目链接：https://www.luogu.com.cn/problem/P3954
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;
	//a,b,c分别是三种成绩，ans是答案
    cin>>a>>b>>c;
    ans=a*0.2+b*0.3+c*0.5;//计算
    cout<<ans;
    return 0;//结束
}