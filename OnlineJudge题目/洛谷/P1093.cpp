/*
洛谷P1093：奖学金
题目链接：https://www.luogu.com.cn/problem/P1093
本来是在语言提高班课件里面看见的，突然发现是洛谷里面的题，是 NOIP 普及- 的题
*/
#include<bits/stdc++.h>
using namespace std;
struct Score
{
    int id,c,m,e,t;
    /*
    id是学号
    c是语文成绩
    m是数学成绩
    e是英语成绩
    t是总分
    */
};
Score s[10000];
bool cmp(Score a,Score b)
{
    if(a.t>b.t)//判断：总分从大到小
    {
        return true;//排序
    }
    if(a.t==b.t&&a.c>b.c)//总分相等，语文成绩从大到小
    {
        return true;//排序
    }
    if(a.t==b.t&&a.c==b.c&&a.id<b.id)//总分和语文成绩都相等，学号 从小到大
    {
        return true;//排序
    }
    else
    {
        return false;//否则不行
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)//for循环：读入学生信息
    {
        cin>>s[i].c>>s[i].m>>s[i].e;
        s[i].id=i;//学号
        s[i].t=s[i].c+s[i].m+s[i].e;//总分
    }
    sort(s+1,s+n+1,cmp);//sort排序
    for(int i=1;i<=5;i++)//for循环：输出前5个
    {
        cout<<s[i].id<<" "<<s[i].t<<endl;
    }
    return 0;//结束
}