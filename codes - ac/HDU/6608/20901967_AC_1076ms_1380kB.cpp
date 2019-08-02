#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//ll mul(ll x,ll y,ll mod){
//    ll tmp=(x*y-(ll)((long double)x/mod*y+1.0e-8)*mod);
//    return tmp<0 ? tmp+mod : tmp;
//}
ll mul(ll x,ll y,ll mod){
    __int128 a=x,b=y,c=mod;
    return (ll)(a*b%mod);
}
bool check(ll x){

    for(ll i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
ll quick(ll a,ll b,ll mod){
    ll res=1;
    while(b){
        if(b&1)
            res=mul(res,a,mod);
        a=mul(a,a,mod);
        b>>=1;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll ret;
        for(ll i = n -1;;i--)
            if(check(i)){
                ret=i;
                break;
            }
        ll ans=1;
        if(n%2==0)
            ans=n-1;
       // cout<<ret<<endl;
        for(ll i=ret+1;i<n-1;i++){
            ans=mul(ans,quick(i,n-2,n),n);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
