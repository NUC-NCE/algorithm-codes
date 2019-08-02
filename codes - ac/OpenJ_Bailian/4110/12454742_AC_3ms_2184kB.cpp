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
struct Node
{
    double v,w;
    double z;
} a[101000];
bool cmp(Node a,Node b)
{
    return a.z>b.z;
}
int main()
{
    int n;
    double W;
    while(~(sd(n),slf(W))){
        rep(1,n,i){
            slf(a[i].v),slf(a[i].w);
            a[i].z=a[i].v/a[i].w;
        }
        sort(a+1,a+1+n,cmp);
        double ans=0;
        rep(1,n,i){
            if(W>=a[i].w){
                W-=a[i].w;
                ans+=a[i].v;
            }
            else{
                ans+=W*a[i].z;
                break;
            }
        }
        printf("%.1f\n",ans);
    }
    return 0;
}
