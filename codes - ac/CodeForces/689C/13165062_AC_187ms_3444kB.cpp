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
using namespace std;
ll m;
int main()
{
    ll l=0,r=1e16;
    ll mid=(l+r)/2;
    cin>>m;
    while(l<r)
    {
        mid=(l+r)/2;
        ll sum=0;
        for(ll i=2;i*i*i<=mid;i++)
            sum+=mid/(i*i*i);
        if(sum>=m)
            r=mid;
        else
            l=mid+1;
    }
    //printf("%d %d\n",l,r);
    ll ans=0;
    for(ll i=2;i*i*i<=l;i++)
        ans+=l/(i*i*i);//
    if(ans==m)
        cout<<l<<endl;
    else
        cout<<"-1"<<endl;
}
