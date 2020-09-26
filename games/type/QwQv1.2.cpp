//按分号键退出
/*
更新日志:
1.增加测速功能
2.可选择是否显示打的字 
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
	cout<<"正确率:"<<(total-wrong+0.0)/total*100<<"%"<<endl;
	cout<<"错了:"<<wrong<<"个"<<endl;
	cout<<"平均速度:"<<(endTime-startTime)/3600*cc<<"字/分钟";
}
int main()
{
	say("欢迎来到打字练习!");
	say("by jjl studio");
	say("需要显示自己打的字吗?(输入1或0)");
	cin>>yes;
	exercise();
}
