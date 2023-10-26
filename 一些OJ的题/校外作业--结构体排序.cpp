/*
这是昨天我在 核*编程 学结构体排序时剩下的作业，被我截图拿回家做了
调试成功，样例AC，等待评测
*/
#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x,y;
    /*
    x是行
    y是列
    */
};
Point point[100005];//结构体数组：要开大
bool cmp(Point x,Point y)//自定义函数：比较函数
{
    if(x.x>y.x)//判断 x 的行数 > y 的行数
    {
        return true;//可以排序：返回true，因为这是一个bool函数
    }
    if(x.x==y.x&&x.y>y.y)//判断：x 的行数 = y 的行数，而且 x 的列数 > y 的列数
    {
        return true;//可以排序
    }
    else
    {
        return false;//否则不行
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)//for循环：读入点
    {
        cin>>point[i].x>>point[i].y;
    }
    sort(point+1,point+n+1,cmp);//sort：排序
    cout<<point[k].x<<" "<<point[k].y;//输出排序完成的第k个点
    return 0;//结束
}