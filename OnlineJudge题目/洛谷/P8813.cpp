/*
洛谷P8813：乘方
题目链接：https://www.luogu.com.cn/problem/P8813
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,ans=1;
	//a是底数，b是指数，ans是答案
	cin>>a>>b;
	if(a==1)//判断：a是否为1，因为1不管乘上多少次还是1
    {
		cout<<1;
		return 0;//直接结束
	}
	while(b>=1&&ans<=1000000000)//一个while循环：如果b>=1，ans小于数据范围，循环
	{
		ans*=a;//乘起来
		b--;//指数减少（规定次数）
	}
	if(ans>1000000000)//判断：超过数据范围
	{
		cout<<"-1";
		return 0;//直接结束
	}
	cout<<ans;
	return 0;//结束
} 