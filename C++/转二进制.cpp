/*
作者:jjl
bilibili:打杂的up
QQ:1244744154
GitHub:juruojjl(小号),大号是jijialinjuruo
请联系小号谢谢 
名称:读心术(bushi)
版本号:beta v0.1
将会推出更多版本
这仅仅是测试版
===============警告==================
内部使用,切勿外传 
*/
#include<bits/stdc++.h>
using namespace std;
int bin[111],g[101][101],c[1001],a[10],n,gan,sum;
int main()
{
	cin>>n;
	gan=log2(n)+1;
	for(int i=1;i<=n;i++)
	{
		int t=i;
		int cnt=0;
		while(t)
		{
			bin[cnt++]=t%2;
			t/=2;
		}
		//for(int j=4;j>=0;j--) cout<<bin[j];
		//cout<<","<<i<<",第";
		for(int j=gan;j>=0;j--)
		{
			if(bin[j])
			{
				//cout<<j+1<<",";
				g[j][c[j]++]=i;
			}
			
		}
		//cout<<"位是1";
		//cout<<endl;
	}
	for(int i=0;i<gan;i++)
	{
		for(int j=0;j<c[i];j++)
		{
			if(j==c[i]-1) cout<<g[i][j];
			else cout<<g[i][j]<<",";
		}
		cout<<endl;
		cin>>a[i];
	}
	
	cout<<"你想的数是";
	for(int i=gan-1;i>=0;i--)
	{
		sum+=a[i]*pow(2,i);
	}
	cout<<sum;
	return 0;
}
