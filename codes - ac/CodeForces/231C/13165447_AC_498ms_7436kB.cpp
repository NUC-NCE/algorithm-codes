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
ll a[255000];
ll sum[255000];
int main()
{
    int n,k;
    cin>>n>>k;
    rep(1,n,i)
        cin>>a[i];
    sort(a+1,a+n+1);
    sum[0]=0;
    rep(1,n,i)
        sum[i]=sum[i-1]+a[i];
    ll l=0,r=0;
    ll res=0;
    ll ans;
    for(r=1;r<=n;r++){
        while(l<n&&a[r]*(r-l)-(sum[r]-sum[l])>k)
            l++;
        if(r-l>res){
            res=r-l;
            ans=a[r];
        }
    }
    cout<<res<<' '<<ans<<endl;
    return 0;
}