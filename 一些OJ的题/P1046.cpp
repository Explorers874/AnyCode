/*
洛谷P1046：陶陶摘苹果
题目链接：https://www.luogu.com.cn/problem/P1046
*/

//提示：这是之前做的，可能很粗糙

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,a[11],ans=0;
    //h是高度，数组a是苹果的高度，ans是答案，要初始化
    for(int i=0;i<10;i++)//for循环：读入
    {
        cin>>a[i];
    }
    cin>>h;
    h+=30;//高度提前+30
    for(int i=0;i<10;i++)
    {
        if(a[i]<=h)//判断：能否摘到
        {
            ans+=1;//增加
        }
    }
    cout<<ans;
    return 0;//结束
}