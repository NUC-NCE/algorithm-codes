#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int num[100];
ll dp[20][10][2];
ll dfs(int i,int d,int flag,int query)
{
    if(!query&&~dp[i][d][flag])
        return dp[i][d][flag];
    if(i==1)
        return dp[i][d][flag]=1;
    int ends=query?num[i-1]:9;
    ll ans=0;
    rep(0,ends,j){
        if(!flag&&max(j-d,d-j)<=1)
            continue;
        ans+=dfs(i-1,j,flag&&j ==0,query&&j==ends);
    }
    if (!query)
        dp[i][d][flag]=ans;
    return ans;
}
ll cal(int x)
{
    int len=0;
    while(x){
        num[++len]=x%10;
        x/=10;
    }
    len++;
    return dfs(len,0,1,1);
}
int main()
{
    int a,b;
    memset(dp,-1,sizeof(dp));
    cin>>a>>b;
    cout<<cal(b)-cal(a-1)<<endl;
    return 0;
}
