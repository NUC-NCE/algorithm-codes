#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
map<int,ll>m;
ll quickpow(ll x,ll n)
{
    if(n==0)
        return 1;
    ll res=quickpow(x*x%mod,n/2);
    if(n&1)
        res=res*x%mod;
    return res;
}
ll f(ll t)
{
    if(m[t]!=0)
        return (m[t]+mod)%mod;
    ll ans=quickpow(2,t-1)-1;
    for(int j=2;j*j<=t;j++){
        if(t%j==0)
            ans=(ans-f(t/j)+mod)%mod;
        if(t%j==0&&j*j!=t)
            ans=(ans-f(j)+mod)%mod;
    }
    m[t]=ans;
    return (ans+mod)%mod;
}
int main()
{
    ll x,y;
    cin>>x>>y;
    m[1]=1;
    if(y%x)
        cout<<0;
    else
        cout<<f(y/x);
    return 0;
}
