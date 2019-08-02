#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+100;

int par[maxn];
int ranks[maxn];
int a[maxn];
void init()
{
    for(int i=0;i<maxn;i++){
        par[i]=i;
    }
    memset(a,0,sizeof(a));
}
int finds(int x){
    if(par[x]==x)
        return x;
    else
        return par[x]=finds(par[x]);
}



int main()
{
    init();
    int n,m;
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        x=finds(x);
        y=finds(y);
        if(x==y)
            a[x]++;
        else{
            par[x]=y;
            a[y]+=a[x];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        if(finds(i)==i)
            ans+=a[i]==0?1:0;
    cout<<ans<<endl;
    return 0;
}
