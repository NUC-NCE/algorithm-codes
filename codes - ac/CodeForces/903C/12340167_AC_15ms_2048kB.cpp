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
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n;
int a[5050];
int main()
{
    sd(n);
    rep(1,n,i)
        sd(a[i]);
    sort(a+1,a+1+n);
    int ans=1;
    int maxn=1;
    rep(1,n-1,i){
        if(a[i]==a[i+1]){
            ans++;
            maxn=max(ans,maxn);
        }
        else{
            ans=1;
        }
    }
    pd(maxn);
}
