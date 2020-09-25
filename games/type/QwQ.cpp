//按分号键退出 
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
void exercise()
{
	bool flag=true;
	srand(time(0));
	while(1)
	{
		char ch[25];
		for(int i=1;i<=20;i++) ch[i]=rand()%('Z'-'A'+1)+'A',cout<<ch[i],total++;
		cout<<endl;
		for(int i=1;i<=20;i++)
		{
			char c;
			while(c<'A'||c>'Z') {c=getch();if(c==';') {flag=0;break;}}
			if(!flag) break;
			if(c!=ch[i]) color(12),wrong++;
			cout<<c;
			color(7);
			c='1';
		}
		cout<<endl;
		if(!flag) break;
	}
	cout<<"正确率:"<<(total-wrong+0.0)/total*100<<"%"<<endl;
	cout<<"错了:"<<wrong<<"个"<<endl;
	cout<<"暂不支持测速QAQ以后会支持的QWQ"<<endl;
}
int main()
{
	say("欢迎来到打字练习!");
	say("by jjl studio");
	exercise();
}
