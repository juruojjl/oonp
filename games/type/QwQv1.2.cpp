//���ֺż��˳�
/*
������־:
1.���Ӳ��ٹ���
2.��ѡ���Ƿ���ʾ����� 
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
int total,wrong;
void say(string s)
{
	for(int i=0;i<s.length();i++) cout<<s[i],Sleep(30);
	cout<<endl;
}
void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
bool yes;
void exercise()
{
	bool flag=true;
	int cc=0;
	srand(time(0));
	clock_t startTime=clock();
	while(1)
	{
		char ch[25];
		for(int i=1;i<=20;i++) ch[i]=rand()%('Z'-'A'+1)+'A',cout<<ch[i],total++;
		cout<<endl;
		for(int i=1;i<=20;i++)
		{
			char c;
			while(c<'A'||c>'Z') {c=getch();if(c==';') {flag=0;break;}}
			cc++;
			if(!flag) break;
			if(c!=ch[i]) color(12),wrong++;
			if(yes) cout<<c;
			color(7);
			c='1';
		}
		cout<<endl;
		if(!flag) break;
	}
	clock_t endTime=clock();
	cout<<"��ȷ��:"<<(total-wrong+0.0)/total*100<<"%"<<endl;
	cout<<"����:"<<wrong<<"��"<<endl;
	cout<<"ƽ���ٶ�:"<<(endTime-startTime)/3600*cc<<"��/����";
}
int main()
{
	say("��ӭ����������ϰ!");
	say("by jjl studio");
	say("��Ҫ��ʾ�Լ��������?(����1��0)");
	cin>>yes;
	exercise();
}
