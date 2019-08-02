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
#define plf(d) printf("%.6lf\n",d)
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int l,s,t,n;
//map<ll,ll>dp;
int main()
{
    int a,b,c,d,e,f;
    while(~(sd(a),sd(b),sd(c),sd(d),sd(e),sd(f))){
        if(!a&&!b&&!c&&!d&&!e&&!f)
            break;
        int s=a*1+b*4+c*9+d*16+e*25+f*36;
        int ans=c/4;
        c=c%4;
        if(c>0){
            ans++;
            b=b-(7-c*2);
        }
        ans+=d+e+f;
        b-=5*d;
        if(b>0){
            ans+=b/9;
            b=b%9;
        }
        if(b>0)
            ans++;
        if(ans*36>=s)
            pd(ans);
        else{
            ans=s/36;
            if(s%36!=0)
                ans++;
            pd(ans);
        }
    }
}
