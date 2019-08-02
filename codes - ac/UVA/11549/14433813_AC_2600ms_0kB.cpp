#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
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
typedef unsigned long long ll;
using namespace std;

int inv[20];

ll solve(int n,ll k){
    if(k==0)
        return 0;
    ll ff=k*k;
    int len = 0;
    while(ff>0){
        inv[len++]=ff%10;
        ff/=10;
    }
    if(n>len)
        n=len;
    ll ans=0;
    rep(0,n-1,i)
        ans = ans*10 + inv[--len];
    return ans;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        ll k;
        scanf("%d%lld",&n,&k);
        ll ans=k;
        int t=5e5;
        while(t--){
            k=solve(n,k);
            ans=max(ans,k);
        }
        printf("%lld\n",ans);
    }
    return 0;
}