//#include<bits/stdc++.h>  和老师一起拒绝万能头！

#include<iostream>
#include<cmath>
using namespace std;
void p1(),p2(int x),p3(int x,int y),p4(int a,int b,char c,int m),p5(int n),p7(int n),p8(int n),p9(int n);
//这里事先声明了各种例题的自定义函数
int main()
{
	cout<<"这里是循环结构的例题，输入对应的编号来看例题，输入0结束，输入10清屏"<<endl;
	while(true)
	{
		int mode; 
		cout<<"1. 100-200质数"<<endl<<"2. 级数求和"<<endl<<"3. 数字统计"<<endl<<"4. 画矩形"<<endl<<"5. 与7无关的数"<<endl<<"7. 金币"<<endl<<"8. 数列求和"<<endl<<"9. 质数口袋"<<endl<<"Enter...>>";
		cin>>mode;
		cout<<endl;
		switch(mode)
		{
			case 1:
				p1();
				break;
			case 2:
				int temp;
				cout<<"准备就绪……"<<endl<<"输入n"<<endl<<"Enter...>>";
				cin>>temp;
				p2(temp);
				break;
			case 3:
				int t31,t32;
				cout<<"准备就绪……"<<endl<<"输入左右范围"<<endl<<"Enter...>>";
				cin>>t31>>t32;
				p3(t31,t32);
				break;
			case 4:
				int t41,t42,t44;
				char t43;
				cout<<"准备就绪……"<<endl<<"输入长，宽，字符，空心"<<endl<<"Enter...>>";
				scanf("%d %d %c %d",&t41,&t42,&t43,&t44);
				p4(t41,t42,t43,t44);
				break;
			case 5:
				int t5;
				cout<<"准备就绪……"<<endl<<"输入n"<<endl<<"Enter...>>";
				cin>>t5;
				p5(t5);
				break;
			case 7:
				int t7;
				cout<<"准备就绪……"<<endl<<"输入天数"<<endl<<"Enter...>>";
				cin>>t7;
				p7(t7);
				break;
			case 8:
				int t8;
				cout<<"准备就绪……"<<endl<<"输入终止值"<<endl<<"Enter...>>";
				cin>>t8;
				p8(t8);
				break;
			case 9:
				int t9;
				cout<<"准备就绪……"<<endl<<"输入最大值"<<endl<<"Enter...>>";
				cin>>t9;
				p9(t9);
				break;
			case 10:
				system("cls");
				main();
			case 0:
				cout<<"程序已结束……"<<endl;
				system("pause");
				return 0;
				break;
			default:
				cout<<"e……错误的操作"<<endl<<"输入对应的编号来看例题，输入0结束，输入10清屏"<<endl;
				system("pause");
				cout<<endl<<endl;
		}
	}
}

void p1()
{
	cout<<endl<<"这里是例1"<<endl<<"100-200的质数";
	bool flag=true;
	for(int i=100;i<=200;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)  cout<<i<<' ';
		flag=true;
	}
	cout<<endl;
	system("pause");
	cout<<endl<<endl;
}

void p2(int x)
{
	cout<<endl<<"这里是例2"<<endl<<"级数求和"<<endl;
	double ans=1;
	int t=1;
	for(int i=1;i<=x;i++)
	{
		for(int j=i;j>=1;j--)
		{
			t*=j;
		}
		ans+=1.0*1/t;
		t=1;
	}
	printf("最终答案(保留10位小数)：%.10lf\n",ans);
	system("pause");
	cout<<endl<<endl;
}

void p3(int x,int y)
{
	cout<<endl<<"这里是例3"<<endl<<"数字统计"<<endl;
	int ans;
	for(int i=x;i<=y;i++)
	{
		int temp=i;
		while(temp)
		{
			if(temp%10==2)  ans++;
			temp/=10;
		}
	}
	cout<<"这些数列中2的个数："<<ans<<endl;
	system("pause");
	cout<<endl<<endl;
}

void p4(int a,int b,char c,int m)
{
	cout<<endl<<"这里是例4"<<endl;
	if(m==0)
	{
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				if(i==1||i==a||j==1||j==b)  cout<<c;
				else  cout<<' ';
			}
			cout<<endl;
		}
	}
	if(m==1)
	{
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				cout<<c;
			}
			cout<<endl;
		}
	}
	cout<<"画好啦"<<endl;;
	system("pause");
	cout<<endl<<endl;
}

void p5(int n)
{
	cout<<endl<<"这里是例5"<<endl;
	int ans;
	for(int i=1;i<=n;i++)
	{
		if(i%7!=0&&i%10!=7&&i/10%10!=7)  ans+=i*i;
	}
	cout<<"与7无关的数的平方和："<<ans<<endl;
	system("pause");
	cout<<endl<<endl;
}

void p7(int n)
{
	cout<<endl<<"这里是例7"<<endl;
	int ans,coin=1,t=1;
	for(int i=1;i<=n;i++)
	{
		ans+=coin;
		t--;
		if(t==0)
		{
			coin++;
			t=coin;
		}
	}
	cout<<"总共可以获取的金币数量"<<ans<<endl;
	system("pause");
	cout<<endl<<endl;
}

void p8(int n)
{
	cout<<endl<<"这里是例8"<<endl;
	int ans;
	for(int i=1;i<=n;i++)
	{
		ans+=i;
	}
	cout<<"输入区间的总和："<<ans<<endl;
	system("pause");
	cout<<endl<<endl;
}

void p9(int n)
{
	int ans=1,t;
	bool flag=true;
	cout<<"这里是例9"<<endl<<"1-最大值中质数的和(不超过最大值)"<<endl;
    if(n<=1)
    {
        cout<<"0";
		main();
    }
	cout<<"2"<<endl;
	for(int i=3;i<=n;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
		}
        if(flag)  t+=i;
		if(flag&&t<n)
		{
			ans++;
			cout<<i<<endl;
		}
		flag=true;
	}
	cout<<ans<<endl;
	system("pause");
	cout<<endl<<endl;
}