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
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[2010];
int main()
{
    int x,y,t,ans=0;
    cin>>t;
    while(t--){
        string p,q;
        cin>>p>>q>>x;
        x=2*x+1;
        if(q=="=")
            a[x]++;
        if(q==">=")
            rep(x,2002,i)
                a[i]++;
        if(q==">")
            rep(x+1,2002,i)
                a[i]++;
        if(q=="<=")
            rep(0,x,i)
                a[i]++;
        if(q=="<")
            rep(0,x,i)
                a[i]++;
    }
    rep(0,2002,i)
        ans=max(ans,a[i]);
    cout<<ans<<endl;
}
