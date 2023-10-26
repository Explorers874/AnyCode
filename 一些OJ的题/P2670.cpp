/*
洛谷P2670：扫雷游戏
题目链接：https://www.luogu.com.cn/problem/P2670

好吧，我想起来了一道题的做法……
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int map[10000][10000],a,b;
    char temp;
    /*
    二维数组map存储扫雷的地图
    a,b表示地图的长和宽（行和列）
    temp用来录入地图
    */
    cin>>a>>b;
    for(int i=1;i<=a/*长*/;i++)//for循环嵌套：读入地图
    {
        for(int j=1;j<=b/*宽*/;j++)
        {
            cin>>temp;
            if(temp=='*')//判断：是地雷
            {
                map[i][j]=1;//将这个格子设为1
            }
            if(temp=='?')//判断：不是地雷
            {
                map[i][j]=0;//设为0
            }
        }
    }
    for(int i=1;i<=a;i++)//for循环嵌套：计算
    {
        for(int j=1;j<=b;j++)
        {
            if(map[i][j]==1)//判断：是地雷格
            {
                cout<<"*";//输出地雷
            }
            if(map[i][j]==0)//判断：不是地雷
            {         //把上、下、左、右、左上、左下、右上、右下加起来，统计周围的地雷
                cout<<map[i+1][j] + map[i-1][j] + map[i][j+1] + map[i][j-1] + map[i+1][j+1] + map[i-1][j-1] + map[i-1][j+1] + map[i+1][j-1];
            }
        }
        cout<<endl;//记得换行
    }
    return 0;//结束
}
//VSCode的code-runner扩展怎么不能用了，害我还要去洛谷在线IDE去运行 :(