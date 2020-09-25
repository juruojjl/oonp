/*
1.敲键盘
2.测测你的欧皇体质
3.点不到的对话框
4.钓乌龟
5.接龙
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define wtf MessageBox(0,"瞎写什么东西，jjl这就带你去爬山，然后把你摔到主页面去，你看，乱写东西还不是得去主页面，哎","你干嘛呢？",MB_OKCANCEL|48)
using namespace std;
ofstream fout("numbers.txt");
void say(string s)
{
	for(int i=0;i<s.length();i++) cout<<s[i],Sleep(30);
	cout<<endl;
}
void game1()
{
	system("cls");
	say("INITIALIZING......");
	char key,t;
	int cishu=0,ans=0,n;
	key=rand()%26;
	key+='a';
	say("初始化成功！");
	say("游戏规则：电脑随机选择一个键，如果在敲到这个键即成功，敲击错误n次会重新生成一个键");
	say("请输入n");
	cin>>n;
	say("3秒后开始");
	Sleep(3000);
	say("开始吧！");
	while(t!='0')
	{
		cout<<"当前敲击次数："<<ans;
		cout<<"当前敲击：";
		t=getch();
		cout<<t<<endl;
		cishu++;
		ans++;
		if(t==key) break;
		if(cishu==n)
		{
			key=rand()%26;
			key+='a';
			cishu=0;
		}
		system("cls");
	}
	if(t=='0')
	{
		say("你退出了");
		say("你失败了");
		return; 
	}
	say("哇！你成功了！");
	say("你尝试了");
	cout<<ans;
	say("次赢了游戏");
	say("是否重来？(y/n)");
	char choice=getch();
	if(choice=='y') game1();
	else if(choice=='n') return;
	else
	{
		wtf;
		return;
	}
}
void game2()
{
	srand(time(0));
	int n,num=-1;
	say("游戏规则：输入一个数n(n<=32768)，系统生成随机数并测试多少次能够生成你输入的数，输入-1退出");
	say("输入n...");
	cin>>n;
	int ans=0;
	say("系统已经开始生成随机数了");
	while(n!=-1)
	{
		int t=rand()%32768+1;
		fout<<t<<endl;
		ans++;
		if(t==n) break;
	}
	say("系统用了");
	cout<<ans;
	say("次生成了你的数，稍后将打开生成的数，恭喜您获得称号：");
	fout.close();
	if(ans==1) say("绝世欧皇！");
	else if(ans>=2&&ans<=10) say("欧皇血统！");
	else if(ans>=11&&ans<=100) say("小小欧皇！");
	else if(ans>=101&&ans<=1000) say("就差亿点！");
	else if(ans>=1001&&ans<=5000) say("欧皇前世！");
	else if(ans>=5001&&ans<=10000) say("普通平民！");
	else say("绝世非酋！");
	say("是否重来？(y/n)");
	char choice=getch();
	if(choice=='y') game2();
	else if(choice=='n') return;
	else
	{
		wtf;
		return;
	}
}
void game3()
{
	say("是否重来？(y/n)");
	char choice=getch();
	if(choice=='y') game3();
	else if(choice=='n') return;
	else
	{
		wtf;
		return;
	}
}
int main()
{
	system("title jjl的小游戏集合");
	system("color F0");
	say("欢迎来到月光宝...");
	Sleep(1000);
	say("对不起走错了，搞事情的被我干掉了");
	system("cls");
	say("欢迎来到小游戏集合！");
	say("by jjl工作室\n");
	int op=114514;
	while(op!=0)
	{
		say("下面的游戏里，有一些有彩蛋哦~");
		say("以下是游戏列表：");
		say("1.敲键盘");
		say("2.测测你的欧皇体质");
		say("3.点不到的对话框");
		say("0.退出");
		cin>>op;
		switch(op)
		{
			case 1:game1();break;
			case 2:game2();break;
			case 0:say("再见！");break;
			default:say("还没写呢");break;
		}
		system("cls");
	}
}