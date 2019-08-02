#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+100;
int n;
ll a[maxn];
ll g,l;
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
ll lcm(ll a,ll b){
    return 1LL*a/gcd(a,b)*b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        memset(a,0,sizeof(a));
        scanf("%d%lld%lld",&n,&g,&l);
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        if( (l%g) || (n==1&&l!=g) ){
            puts("-1");
            continue;
        }
        int ans=0;
        ll gg=l,ll=g;
        for(int i=1;i<=n;i++){
            if(a[i]%g||l%a[i])
                ans++;
            else{
                gg=gcd(gg,a[i]);
                ll=lcm(ll,a[i]);
            }
        }
        int res=0;
        if(gg!=g)
            res++;
        if(ll!=l)
            res++;
        //cout<<ans<<" "<<res<<endl;
        ans=max(ans,res);
        printf("%d\n",ans);
    }
    return 0;
}

/*
1
2 30 900
90 450
*/
