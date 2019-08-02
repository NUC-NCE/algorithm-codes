#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll quick(ll a,ll b,ll mod){
    ll res=1;
    a%=mod;
    assert(b>=0);
    for(; b; b>>=1){
        if(b&1)res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}
int main(){
    ll a,b,p,x;
    cin>>a>>b>>p>>x;
    ll ans =0;
    ll res = a;
    for (ll i=1;i<p;i++,res=res*a%p){
        ll n = b*quick(res,p-2,p)%p;     // n*(a^n)%p==b%p
        ll k = (i-n+p)%p;
        ll minn = i+k*(p-1);
        if (minn>x)
            continue;
        ans += max((ll)0,(x-minn)/(p*(p-1))+1);
    }
    cout<<ans<<endl;
    return 0;
}

