#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[220];

int main()
{
    int t;
    ios::sync_with_stdio(false);
    cin>>t;
    int n;
    while(t--){
    cin>>n;
        double x[220],y[220];
        for(int i=1;i<=n;i++)
            dp[i]=1;
        dp[0]=0;

        for(int i=1;i<=n;i++)
            cin>>x[i]>>y[i];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++){
                if(x[i]>x[j]&&y[i]<y[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        int maxn=dp[1];
        for(int i=1;i<=n;i++)
            maxn=max(maxn,dp[i]);
        cout<<maxn<<endl;
    }
    return 0;
}
