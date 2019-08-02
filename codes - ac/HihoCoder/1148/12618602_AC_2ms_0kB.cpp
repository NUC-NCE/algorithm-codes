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
char month[12][20]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" , "December"};
int f(char a[])
{
    int i;
    for(i=0;i<12;i++){
        if (strcmp(a,month[i])==0)
            break;
    }
    return i+1;
}
int main ()
{
    ll sy,st;
    ll ey,ed;
    char smonth[20],emonth[20];
    int i,t,ans;
    while(~scanf("%d",&t))
    {
        ans=1;
        while(t--){
            scanf("%s %lld, %lld",smonth,&st,&sy);
            scanf("%s %lld, %lld",emonth,&ed,&ey);
            if (f(smonth)==1||(f(smonth)==2&&st<=29))
                sy --;
            if (f(emonth)==1||(f(emonth)==2&&ed<29))
                ey --;
            ll sum = 0;
            sum=ey/4-sy/4;
            sum=sum-(ey/100-sy/100);
            sum+=((ey/400-sy/400));
            printf("Case #%d: %lld\n",ans++,sum);
        }

    }
    return 0;
}
