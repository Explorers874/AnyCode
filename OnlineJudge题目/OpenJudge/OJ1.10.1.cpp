/*
OpenJudge 1.10.1：谁考了第k名
题目链接：http://noi.openjudge.cn/ch0110/01
*/
#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string id;
    int score;
    /*
    字符串id是学号
    score是分数
    */
};
Student student[10000];
bool cmp(Student a,Student b)//自定义函数：比较函数
{
    if(a.score>b.score)//判断：前面比后面大
    {
        return true;//可以
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
    for(int i=1;i<=n;i++)//for循环：读入学生信息
    {
        cin>>student[i].id>>student[i].score;
    }
    sort(student+1,student+n+1,cmp);//sort排序
    cout<<student[k].id<<" "<<student[k].score;//输出第k名的信息
    return 0;//结束
}