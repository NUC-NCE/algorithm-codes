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
int t;
int n,v,w;
double a[110];
int main()
{
    sd(t);
    while(t--){
        sd(n),sd(v),sd(w);
        rep(1,n,i){
            slf(a[i]);
        }
        sort(a+1,a+1+n);
        if(a[1]>w){
            puts("0 0.00");
            continue;
        }
        double ans=0;
        int res=0;
        rep(1,n,i){
            if((ans+a[i])<=w*i)
            {
                res=i;
                ans+=a[i];
            }
            else
                break;
        }
        v=v*res;
        double x=0;
        /*if((int)ans*10/res%10>=5)
        x=0.01;*/
        printf("%d %.2f\n",v,ans/res/100+x);
    }
    return 0;
}
