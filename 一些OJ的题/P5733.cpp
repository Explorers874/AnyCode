/*
洛谷P5733：自动修正
题目链接：https://www.luogu.com.cn/problem/P5733

深入浅出的例题？我刚好买了深入浅出 :)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);//一个小优化：关闭快读快写和cin/cout的同步
    char c[1000];
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++)//for循环：遍历并转换
    {
        c[i]=toupper(c[i]);//大写转换
        cout<<c[i];//输出
    }
    return 0;//结束
}