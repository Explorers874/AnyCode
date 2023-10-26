/*
洛谷P7071：优秀的拆分
题目链接：https://www.luogu.com.cn/problem/P7071
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
	long long ans[30]; //开long long存结果
	cin>>n;
	if(n%2==1)//判断：2的正整数次幂一定是偶数，如果是奇数，直接结束
    {
		cout<<"-1"<<endl;
		return 0;//直接结束
	}	
	ans[1]=1;//先定义ans[1]是2的1次幂
	for(int i=2;i<=26;i++)//for循环：开始乘
    {
		ans[i]=ans[i-1]*2;//每次×2
	}
	for(int i=26;i>=2;i--)//for循环：从大到小输出
    {
		if(n>=ans[i])//判断：如果n>=这个结果就输出
		{
			n-=ans[i];//减掉这个结果
			cout<<ans[i]<<' ';
		}
		if(n==1) //判断：不能输出了
		{
            return 0;//直接结束
        }
	}
	return 0;//结束
}