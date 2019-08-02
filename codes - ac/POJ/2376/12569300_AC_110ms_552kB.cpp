//G
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
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
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n,t;
pair<int ,int>a[25100];

void solve(){
    sort(a+1,a+1+n);
    int ans=0,ends=0,flag=0,res=0;
    rep(1,n,i){
        for(int j=i;a[j].first<=ends+1;j++){
            if(a[j].second>ans)
                ans=a[j].second;
        }
        ends=ans;
        res++;
        if(ends>=t)
            break;
    }
    if(ends<t)
        puts("-1");
    else
        pd(res);
}


int main(){
    while(~(sd(n),sd(t))&&n){
        rep(1,n,i){
            sd(a[i].first);
            sd(a[i].second);
        }
        solve();
    }
    return 0;
}













