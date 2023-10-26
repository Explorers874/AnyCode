/*
洛谷P1059：明明的随机数
题目链接：https://www.luogu.com.cn/problem/P1059
*/

//提示：这是之前做的，可能很粗糙，被优化了一些，并保留了之前的AC代码，可是代码变长了:(

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],n,ans=0;
    //数组a是存储数据，n是数据的数量，ans是数据重复数量，需要初始化
    cin>>n;
    for(int i=1;i<=n;i++)//for循环：读入
    {
        cin>>a[i];
    }

    /*  这个地方是之前写的冒泡排序，但我现在更喜欢sort了…… :(
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    */

    sort(a/*数据的开始*/,a+n+1/*数据的结束*/);//sort排序真好用~ :)
    
    /*  这个地方是之前写的专门查找重复数量的循环，被我找到了BUG：只能找相邻的数据。
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
        {
            s+=1;
        }
    }
    */

    for(int i=1;i<=n;i++)
    {                           //双循环：遍历并查找重复
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])//判断：是否相同
            {
                a[j]=0;//去重：标记重复
            }
        }
    }
    for(int i=1;i<=n;i++)//for循环：遍历并查找重复
    {
        if(a[i]==0)//判断：重复标记
        {
            ans++;
        }
    }
    cout<<n-ans/*总数-重复*/<<endl;
    for(int i=1;i<=n;i++)//for循环：输出
    {
        if(a[i]!=0)//排除重复
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;//结束
}