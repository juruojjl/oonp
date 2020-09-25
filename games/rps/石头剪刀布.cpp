#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
string you[6]={"石头","","剪刀","","","布"};
string machine[4]={"","石头","剪刀","布"};
void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void gxb()
{
	cout<<"贡献重要程度         洛谷ID         为何上榜"<<endl;
	cout<<"     1               Zhoumy    提出压行和加入分数"<<endl;
	cout<<"输入y以开始游戏...";
	char choice;
	while(choice!='y') choice=getch();
	system("cls");
	return; 
}
int main()
{
	int a[3]={0,2,5},n,ans,score=0;
	srand(time(0));
	cout<<"欢迎来到石头-剪刀-布!"<<endl;
	Sleep(1000);
	cout<<"需要查看贡献榜吗？(y/n)"<<endl;
	char choice=getch();
	if(choice=='y') gxb();
	else cout<<"让我们开始游戏吧"<<endl; 
	for(;;)
	{
		cout<<"石头=0,剪刀=2,布=5,退出=7"<<endl;
		cout<<"机器石头=1,机器剪刀=2,机器布=3"<<endl;
		Sleep(1000);
		color(7);
		cout<<"石头!"<<endl;
		Sleep(500);
		cout<<"剪刀!"<<endl;
		Sleep(500);
		cout<<"布!"<<endl;
		Sleep(500);
		n=rand()%3+1;
		cin>>ans;
		if(ans==7)
		{
			cout<<"最终分数："<<score<<endl;
			cout<<"再见!"<<endl;
			break; 
		}
		if(ans==0&&n==2||ans==2&&n==3||ans==5&&n==1)
		{
			color(2);
			cout<<"胜!"<<endl;
			cout<<"你的分数++";
			score++;
			color(7);
			cout<<"对方:"<<machine[n]<<"   你:"<<you[ans]<<endl; 
			cout<<"分数："<<score<<endl;
		}
		else if(ans==0&&n==3||ans==2&&n==1||ans==5&&n==2)
		{
			color(12);
			cout<<"输!"<<endl;
			cout<<"你的分数--";
			score--;
			color(7);
			cout<<"对方:"<<machine[n]<<"   你:"<<you[ans]<<endl;
			cout<<"分数："<<score<<endl;
		}
		else if(ans==0&&n==1||ans==2&&n==2||ans==5&&n==3)
		{ 
			color(9);
			cout<<"平局!"<<endl;
			color(7);
			cout<<"对方:"<<machine[n]<<"   你:"<<you[ans]<<endl;
			cout<<"分数："<<score<<endl;
		}
		else
		{
			color(5);
			cout<<"无效!"<<endl;
		}
		cout<<endl;
	}
	return 0;
}
