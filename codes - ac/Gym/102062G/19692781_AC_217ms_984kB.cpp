#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+100;
const long long mod = 1e9+7;
char s[maxn];
typedef long long ll;
int main()
{
    int t;
    int cas=1;
    scanf("%d",&t);
    while(t--){
        memset(s,0,sizeof(s));
        int n;
        scanf("%d",&n);
        scanf("%s",s+1);
        ll ans=0;
        ll p=0;
        for(int i=1;i<=n;i++)
        {
            ll len=n-i+1;
            ll ret=(1LL+len)*len/2;
            ll res=(1LL*i-1)*(i)/2;
            res%=mod;
            ret%=mod;
            p=ret+p-res;
            p=(p%mod+mod)%mod;
            //cout<<ret<<" "<<res<<endl;
            ans=(ans+p*((ll)s[i])%mod)%mod;
        }
        printf("Case %d: %lld\n",cas++,ans%mod);
    }
    return 0;
}
