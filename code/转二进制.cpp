/*
����:jjl
bilibili:���ӵ�up
QQ:1244744154
GitHub:juruojjl(С��),�����jijialinjuruo
����ϵС��лл 
����:������(bushi)
�汾��:beta v0.1
�����Ƴ�����汾
������ǲ��԰�
===============����==================
�ڲ�ʹ��,�����⴫ 
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
		//cout<<","<<i<<",��";
		for(int j=gan;j>=0;j--)
		{
			if(bin[j])
			{
				//cout<<j+1<<",";
				g[j][c[j]++]=i;
			}
			
		}
		//cout<<"λ��1";
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
	
	cout<<"���������";
	for(int i=gan-1;i>=0;i--)
	{
		sum+=a[i]*pow(2,i);
	}
	cout<<sum;
	return 0;
}
