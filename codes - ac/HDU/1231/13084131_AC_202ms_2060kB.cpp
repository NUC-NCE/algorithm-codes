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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF=-1e7;
int t,n;
int a[101000];
int main()
{
    while(~sd(n)&&n){
        me(a,0);
        rep(1,n,i)
            sd(a[i]);
        int l=1,r=1;
        int k=1;
        int sum=0;
        int maxn=INF;
        rep(1,n,i){
            sum+=a[i];
            if(sum>maxn){
                maxn=sum;
                l=k;
                r=i;
            }
            if(sum<0){
                k=i+1;
                sum=0;
            }
        }
        if(maxn<0){
            maxn=0;
            l=1,r=n;
        }
        printf("%d %d %d\n",maxn,a[l],a[r]);
    }
    return 0;
}
