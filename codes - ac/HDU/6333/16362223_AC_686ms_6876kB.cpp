#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
typedef long long ll;
ll len;
int n,m;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 100;
ll inv[maxn];
ll fac[maxn];
ll ans[maxn];
struct node{
    ll l;
    ll r;
    ll pos;
    ll key;
    node(){}
    node(ll L,ll R,ll p):l(L),r(R),pos(p){
        key=r/len;
    }
    bool operator < (const node y){
        if(key==y.key)
            return l<y.l;
        else
            return key<y.key;
    }
}po[maxn];


ll res;

ll C(int l,int r){
    if(r<l)
        return 0;
    return (ll)1LL*fac[r]*inv[l]%mod*inv[r-l]%mod;
}

int main(){
    int T;
    inv[0]=1;
    inv[1]=1;
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=maxn-50;i++)
        fac[i]=(1LL*fac[i-1]*i)%mod;
    for(int i=2;i<=maxn-50;i++)
        inv[i]=(1LL*mod-mod/i)*inv[mod%i]%mod;
    for(int i=2;i<=maxn-50;i++)
        inv[i]=1LL*inv[i-1]*inv[i]%mod;
    /*
    inv[maxn-50]=quick(fac[maxn-50],mod-2);
    for(int i=maxn-51;i>=1;i--)
        inv[i]=inv[i+1]*(i+1)*%mod;
    */
    scanf("%d",&T);
    len=(int)sqrt(100000+0.5);
    //cout<<len<<endl;

    for(int i=1;i<=T;i++){
        ll n,k;
        scanf("%lld%lld",&n,&k);
        po[i]=node(k,n,i);
    }
    int L=1;
    int R=1;
    res=2;
    sort(po+1,po+1+T);
    /*for(int i=1;i<=T;i++)
    {
        cout<<po[i].l<<"*******"<<po[i].r<<"********"<<po[i].pos<<endl;
    }*/
    for(int i=1;i<=T;i++){
        while(L<po[i].l){
            res=(res+C(L+1,R))%mod;
            L++;
        }

        while(L>po[i].l){
            L--;
            res=((res-C(L+1,R))%mod+mod)%mod;
        }

        while(R<po[i].r){
            R++;
            res=((2*res-C(L,R-1))%mod+mod)%mod;
        }
        
        while(R>po[i].r){
            res=(res+C(L,R-1))*inv[2]%mod;
            R--;
        }
        ans[po[i].pos-1]=res;
        //cout<<po[i].pos<<"****"<<res<<endl;
    }
    for(int i=0;i<T;i++)
        printf("%lld\n",ans[i]);
    return 0;
}
