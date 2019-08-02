#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 200;
int a[maxn];
int dp[maxn][maxn][2];
int dfs(int l,int r,int k,int pos){
    if(dp[l][r][k]!=-1)
        return dp[l][r][k];
    dp[l][r][k]=0;
    for(int i=l;i<pos;i++){
        if((i==l||a[i]>a[i-1])&&a[i]>a[i+1])
            dp[l][r][k]=dp[l][r][k]|(!dfs(i+1,r,(k+i-l)%2,pos));
    }
    for(int i=pos+1;i<=r;i++){
        if((i==r||a[i]>a[i+1])&&a[i]>a[i-1])
            dp[l][r][k]=dp[l][r][k]|(!dfs(l,i-1,(k+r-i)%2,pos));
    }
    if(k)
        dp[l][r][k]=dp[l][r][k]|(!dfs(l,r,k-1,pos));
    return dp[l][r][k];
}



int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        memset(a,0,sizeof(a));
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        int pos;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                pos=i;
            }
        }

        dp[pos][pos][1]=1;
        dp[pos][pos][0]=1;
        if(dfs(1,n,0,pos))
            puts("Alice");
        else
            puts("Bob");
    }
}
