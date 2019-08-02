#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
vector<ll>v;
unordered_map<ll,int>mp;
ll dp[1100];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(!mp[x])
            v.push_back(x);
        mp[x]++;
    }
    ll ans=0;
    int num=0;
    int len=v.size();
    dp[0]=1;
    for(int i=0;i<len;i++)
        for(int j=k;j>=1;j--)
        {
            dp[j]=(dp[j]+dp[j-1]*mp[v[i]])%mod;
            //cout<<i<<" "<<j<<" "<<dp[j]<<endl;
        }
    cout<<dp[k]<<endl;
    return 0;
}
