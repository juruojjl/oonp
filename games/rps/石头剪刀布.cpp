#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
string you[6]={"ʯͷ","","����","","","��"};
string machine[4]={"","ʯͷ","����","��"};
void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void gxb()
{
	cout<<"������Ҫ�̶�         ���ID         Ϊ���ϰ�"<<endl;
	cout<<"     1               Zhoumy    ���ѹ�кͼ������"<<endl;
	cout<<"����y�Կ�ʼ��Ϸ...";
	char choice;
	while(choice!='y') choice=getch();
	system("cls");
	return; 
}
int main()
{
	int a[3]={0,2,5},n,ans,score=0;
	srand(time(0));
	cout<<"��ӭ����ʯͷ-����-��!"<<endl;
	Sleep(1000);
	cout<<"��Ҫ�鿴���װ���(y/n)"<<endl;
	char choice=getch();
	if(choice=='y') gxb();
	else cout<<"�����ǿ�ʼ��Ϸ��"<<endl; 
	for(;;)
	{
		cout<<"ʯͷ=0,����=2,��=5,�˳�=7"<<endl;
		cout<<"����ʯͷ=1,��������=2,������=3"<<endl;
		Sleep(1000);
		color(7);
		cout<<"ʯͷ!"<<endl;
		Sleep(500);
		cout<<"����!"<<endl;
		Sleep(500);
		cout<<"��!"<<endl;
		Sleep(500);
		n=rand()%3+1;
		cin>>ans;
		if(ans==7)
		{
			cout<<"���շ�����"<<score<<endl;
			cout<<"�ټ�!"<<endl;
			break; 
		}
		if(ans==0&&n==2||ans==2&&n==3||ans==5&&n==1)
		{
			color(2);
			cout<<"ʤ!"<<endl;
			cout<<"��ķ���++";
			score++;
			color(7);
			cout<<"�Է�:"<<machine[n]<<"   ��:"<<you[ans]<<endl; 
			cout<<"������"<<score<<endl;
		}
		else if(ans==0&&n==3||ans==2&&n==1||ans==5&&n==2)
		{
			color(12);
			cout<<"��!"<<endl;
			cout<<"��ķ���--";
			score--;
			color(7);
			cout<<"�Է�:"<<machine[n]<<"   ��:"<<you[ans]<<endl;
			cout<<"������"<<score<<endl;
		}
		else if(ans==0&&n==1||ans==2&&n==2||ans==5&&n==3)
		{ 
			color(9);
			cout<<"ƽ��!"<<endl;
			color(7);
			cout<<"�Է�:"<<machine[n]<<"   ��:"<<you[ans]<<endl;
			cout<<"������"<<score<<endl;
		}
		else
		{
			color(5);
			cout<<"��Ч!"<<endl;
		}
		cout<<endl;
	}
	return 0;
}
