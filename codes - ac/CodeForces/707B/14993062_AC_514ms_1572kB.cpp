#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 1e5+10;
int n,m,k;
int vis[maxn];
struct edge{
    int s;
    int e;
    int w;
}a[maxn];

int main(){
    cin>>n>>m>>k;
    for(int i = 0 ; i<m ; i++)
        cin>>a[i].s>>a[i].e>>a[i].w;
    memset(vis,0,sizeof(vis));
    while(k--){
        int ind;
        cin>>ind;
        vis[ind] = 1;
    }
    int flag = 1;
    int ans=1e9;
    for(int i=0;i<m;i++){
        if((vis[a[i].s]==1&&vis[a[i].e]==0)||(vis[a[i].s]==0&&vis[a[i].e]==1)){
            flag = 0;
            ans = min(ans,a[i].w);
        }
    }
    if(flag)
        cout<<-1;
    else
        cout<<ans;
	return 0;
}