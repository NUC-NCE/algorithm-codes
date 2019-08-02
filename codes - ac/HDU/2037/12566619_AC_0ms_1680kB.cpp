//A
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
#define plf(d) printf("%.6lf\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N = 105;
int N,S[MAX_N],T[MAX_N];
pair<int, int> itv[MAX_N];
void solve()
{
    rep(0,N-1,i){
        itv[i].first=T[i];
        itv[i].second=S[i];
    }
    sort(itv,itv+N);
    int ans=0,t=0;
    rep(0,N-1,i){
        if(t<=itv[i].second){
             ans++;
            t=itv[i].first;
        }
    }
    printf("%d\n",ans);
}
int main()
{
    while(~sd(N)){
        memset(S,0,sizeof(S));
        memset(T,0,sizeof(T));
        if(N==0)
            break;
        int i;
        rep(0,N-1,i)
            scanf("%d %d",&S[i],&T[i]);
        solve();
    }
    return 0;
}