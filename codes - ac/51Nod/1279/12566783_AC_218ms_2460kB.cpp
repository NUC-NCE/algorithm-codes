//D
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
int a[50100];
int b[50100];
int n,m;
int main(){
    scanf("%d%d",&n,&m);
    rep(0,n-1,i)
        sd(a[i]);
    rep(0,m-1,i)
        sd(b[i]);
    reps(n-1,1,i)
        if(a[i]>a[i-1])
            a[i]=a[i-1];
    int d=0;
    int ans=0;
    if(a[0]<b[0])
        printf("0\n");
    else
    {
        reps(n-1,0,i)
            if(b[d]<=a[i]){
                d++;
                ans++;
            }
        pd(ans);
    }
}

