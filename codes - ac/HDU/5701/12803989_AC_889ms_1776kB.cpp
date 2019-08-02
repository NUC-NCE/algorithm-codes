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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int ant=8000;
int a[10000],sum[20000];
int main()
{
    int n;
    while(~(sd(n))){
        rep(1,n,i)
            sd(a[i]);
        rep(1,n,i){
            int cnt=0,ans=0;
            memset(sum, 0, sizeof(sum));
            sum[ant] ++;
            rep(1+i,n,j){
                cnt+= (a[j]>a[i]?1:-1);
                sum[ant+cnt]++;
            }
            cnt = 0;
            ans += sum[ant];
            reps(i-1,1,j){
                cnt+=(a[j]<a[i]?1:-1);
                ans+=sum[ant+cnt];
            }
            printf("%d%c",ans,i == n?'\n':' ');
        }
    }
}
