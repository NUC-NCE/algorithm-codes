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
using namespace std;
int t;
int n;
int a[100100];
int main()
{
    sd(t);
    rep(1,t,i)
    {
        me(a,0);
        sd(n);
        rep(1,n,j)
           sd(a[j]);
        int sum=0;
        int maxn=-1e7;
        int s=1,e=1,k=1;
        rep(1,n,j){
            sum+=a[j];
            if(sum>maxn){
                maxn=sum;
                e=j;
                s=k;
            }
            if(sum<0){
                sum=0;
                k=j+1;
            }
        }
        printf("Case %d:\n%d %d %d\n",i,maxn,s,e);
        if(i!=t)
            printf("\n");
    }
    return 0;
}
