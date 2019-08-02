#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 2e5+5;
int n,m,d;
int ex,ey;

vector<char> mp[maxn];
vector<bool> vis[maxn];
vector<bool> vis2[maxn];
struct qtm{
	int x,y;
	int sp;
};

queue<qtm> q1;
queue<qtm> que;

const int cx[]={0,0,-1,1};
const int cy[]={1,-1,0,0};

bool chk(int x,int y){
	if(x<1||y<1||x>n||y>m) return 1;
	if(vis[x][y]||mp[x][y]=='M') return 1;
	return 0;
}

bool chk1(int x,int y){
	if(x<1||y<1||x>n||y>m) return 1;
	if(vis2[x][y]||mp[x][y]=='M') return 1;
	return 0;
}

void bfs1(){
	while(!q1.empty()){
		qtm p=q1.front();
		q1.pop();
		int px,py,nx,ny;
		px=p.x,py=p.y;
	//	cout<<"   "<<px<<"   "<<py<<"   "<<p.sp<<endl;
		if(vis[px][py]||p.sp>=d) continue;
		vis[px][py]=1;
		for(int i=0;i<4;i++){
			nx=px+cx[i];
			ny=py+cy[i];
			if(chk(nx,ny)) continue;
			mp[nx][ny]='M';
			q1.push(qtm{nx,ny,p.sp+1});
		}
	}
}

void bfs2(){
	while(!que.empty()){
		qtm p=que.front();
		que.pop();
		int px,py,nx,ny;
		
		px=p.x,py=p.y;
		if(mp[p.x][p.y]=='M') continue;
		if(p.x==ex&&p.y==ey){
			cout<<p.sp<<endl;
			//fflush(stdout);
			return ;
		}
		for(int i=0;i<4;i++){
			nx=px+cx[i];
			ny=py+cy[i];
			if(chk1(nx,ny)) continue;
			vis2[nx][ny]=1;
			que.push(qtm{nx,ny,p.sp+1});
		}
	}
	cout<<-1<<endl;
	//fflush(stdout);
} 
char pts[210000];
void getss(){
	int number = 0;
	char c;
	while(true){
		c=getchar();
		if(c=='\n'||c=='\r'||c==-1) break;
			pts[number++] = c;
	}
	pts[number] = 0;
}
int main() {
	cin>>n>>m>>d;
	char k;
	getchar();
	for(int i=1;i<=n;i++){
		mp[i].push_back(-1);
		vis[i].push_back(0);
		vis2[i].push_back(0);
		getss();
		for(int j=1;j<=m;j++){
			k=pts[j-1];
			mp[i].push_back(k);
			vis[i].push_back(0);
			vis2[i].push_back(0);
			if(k=='M'){
				q1.push(qtm{i,j,0});
			}
			if(k=='S'){
				que.push(qtm{i,j,0});
			}
			if(k=='F'){
				ex=i;
				ey=j;
			}
		}
		//getchar();
	}
	bfs1();
	bfs2();
	return 0;
}