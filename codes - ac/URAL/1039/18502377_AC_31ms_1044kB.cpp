#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 7000;
int val[maxn];
int du[maxn];
int depth[maxn];
vector<int>q[7000];
int f[maxn][2],v[maxn],h[maxn],n;
void dfs(int x){
    f[x][0]=0;
	f[x][1]=val[x];
	for(int i=0;i<q[x].size();i++){
		int y=q[x][i];
		dfs(y);
		f[x][0]+=max(f[y][0],f[y][1]);
		f[x][1]+=f[y][0];
	}

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>val[i];
    int u,v;
    while(scanf("%d%d",&u,&v)&&(u!=0&&v!=0)){
        du[u]++;
        q[v].push_back(u);
    }
    int root;
    for(int i=1;i<=n;i++){
        if(du[i]==0){
            root=i;
            break;
        }
    }
    dfs(root);
    cout<<max(f[root][0],f[root][1])<<endl;
    return 0;
}
