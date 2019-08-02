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
int prime[1001000];
bool vis[1001000];
int len=0;
int maxn=1001000;
int judge(int x){
    int flag=1;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int x,n;
    sd(n);
    if(n%2==0)
        x=2;
    else
        x=3;
    for(int i=2;;i++){
        if(judge(i)&&judge(n-i-x)){
            printf("%d %d %d\n",x,i,n-i-x);
            break;
        }
    }
    return 0;
}
