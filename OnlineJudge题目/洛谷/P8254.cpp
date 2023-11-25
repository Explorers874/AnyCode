/*
洛谷P8254：王国比赛
题目链接：https://www.luogu.com.cn/problem/P8254
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{                                                      //大臣   题目
    int n, m, cnt, guessans[1007], acans, wa, ac, answer[1007][1007];
    /*
    n是判断题的数量
    m是大臣的数量
    cnt统计预测正确的数量
    数组guessans统计预测答案
    数组acans存储正确答案
    wa统计错误数量
    ac统计正确数量
    二维数组answer存储做题情况
    */
	cin>>n>>m;
	for(int i=1;i<=m;i++)//for循环嵌套：读入大臣以及答案
    {
		for(int j=1;j<=n;j++)
        {
			cin>>answer[i][j];
		}
	}
	for(int j=1;j<=n/*题目*/;j++)//for循环嵌套：计算
    {
		wa=ac=0;//数据初始化
		for(int i=1;i<=m/*大臣*/;i++)
        {
			if (answer[i][j]==0)//判断：选择错误
            {
                wa++;
            }
			if(answer[i][j]==1)//判断：选择正确
            {
                ac++;
            }
		}
		if(wa>ac)//判断：预测错误
        {
            guessans[j]=0;
        }
		else//判断：预测正确
        {
            guessans[j]=1;
        }
	}
	for(int i=1;i<=n;i++)//for循环：读入正确答案并判断
    {
		cin>>acans;
		if(acans==guessans[i])//是否等于预测答案
        {
            cnt++;
        }
	}
	cout<<cnt;
	return 0;//结束
}
 
