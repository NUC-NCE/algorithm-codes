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
ll a[201000];
ll sum[201000];
int main(){
    int n;
    while(~sd(n)){
        rep(1,n,i){
            ll x,y;
            slld(x),slld(y);
            a[i]=x-y;
            a[n+i]=a[i];
        }
        ll len=0;
        ll maxn=0;
        ll ans=0;
        rep(1,n*2,i){
            ans+=a[i];
            if(ans<0){
                ans=0;
                len=0;
            }
            else
                len++;
            if(maxn<len)
                maxn=len;
            if(maxn==n)
                break;
        }
        plld(maxn);
    }
    return 0;
}
