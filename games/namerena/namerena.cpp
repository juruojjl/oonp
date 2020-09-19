/*
default random seed is 1.
now team is unavailable.
*/
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
struct player
{
	int attack,defend,hp;
	bool alive=1;
	string name;
//	int score;
};
struct original
{
	int attack,defend,hp;
	string name;
};
void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void say(string s)
{
	for(int i=0;i<s.length();i++) cout<<s[i],Sleep(30);
	cout<<endl;
}
map<string,player>Name;
map<string,player>origin;
int seed=1;
int cnt=0;
int nowalive;
int main()
{
	srand(seed);
	say("欢迎来到名字竞技场!");
	say("by jjl studio");
	string s[1005];
	while(1)
	{
		string temp;
		getline(cin,temp);
		if(temp=="$end$") break;
		if(temp=="seed:")
		{
			cin>>seed;
			srand(seed);
			continue;
		}
		s[++cnt]=temp;
		Name[s[cnt]].name=origin[s[cnt]].name=s[cnt];
		Name[s[cnt]].hp=origin[s[cnt]].hp=rand()%(400-100+1)+100;
		Name[s[cnt]].attack=origin[s[cnt]].attack=rand()%100+1;
		Name[s[cnt]].defend=origin[s[cnt]].defend=rand()%100+1;
	}
	cnt--;
	nowalive=cnt;
	for(int i=1;i<=cnt;i++) cout<<origin[s[i]].name<<" HP "<<origin[s[i]].hp<<" 攻 "<<origin[s[i]].attack<<" 防"<<origin[s[i]].defend<<endl;
	while(nowalive!=1)
	{
		int att=rand()%cnt+1,att2=rand()%cnt+1;
		int curatt=rand()%origin[s[att]].attack+1,curdef=rand()%curatt+1;
		if(!Name[s[att]].alive||!Name[s[att2]].alive) continue;
		if(att==att2&&Name[s[att2]].alive) {cout<<s[att]<<"试图发起攻击，但是被奇迹地躲开了!"<<endl<<endl;continue;} 
		else if(att!=att2&&Name[s[att2]].alive) cout<<s[att]<<"对"<<s[att2]<<"发起攻击，"<<s[att2]<<"受到"<<curatt-curdef<<"点伤害"<<endl,Name[s[att2]].hp-=curatt-curdef;
		if(Name[s[att2]].hp<=0&&Name[s[att2]].alive) cout<<Name[s[att2]].name<<"SPFA了"<<endl,Name[s[att2]].alive=0,nowalive--;
		cout<<endl;
	}
	string winner;
	for(int i=i;i<=cnt;i++) if(Name[s[i]].alive){winner=s[i];break;}
	cout<<"胜者："<<winner;
	return 0;
}
/*
114
514
1919
810
$end$
*/
