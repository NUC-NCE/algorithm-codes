#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[1005][1005];
int d[4][2]={-1,0,1,0,0,1,0,-1};
string e="girl";
string f="cat";
ll ans1,ans2;
int n,m;
void dfs1(int x,int y,int z)
{
	int i,j;
	if(a[x][y]=='l')
	{
		ans1++;
		return ;
	}
	for(i=0;i<4;i++)
	{
		int fx=x+d[i][0],fy=y+d[i][1];
		if(fx>=1&&fx<=n&&fy>=1&&fy<=m)
		{
			if(a[fx][fy]==e[z])
			{
				dfs1(fx,fy,z+1);
			}
		}
	}
}
void dfs2(int x,int y,int z)
{
	int i,j;
	if(a[x][y]=='t')
	{
		ans2++;
		return ;
	}
	for(i=0;i<4;i++)
	{
		int fx=x+d[i][0],fy=y+d[i][1];
		if(fx>=1&&fx<=n&&fy>=1&&fy<=m)
		{
			if(a[fx][fy]==f[z])
			{
				dfs2(fx,fy,z+1);
			}
		}
	}
}
int main()
{
    ll i,k,t,j;
	cin>>t;
	while(t--)
	{
		ans1=0,ans2=0;
		cin>>n>>m;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>a[i][j];
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				if(a[i][j]=='g')
					dfs1(i,j,1);
				if(a[i][j]=='c')
					dfs2(i,j,1);
			}
		cout<<ans1<<" "<<ans2<<endl;
	}
    return 0;
}