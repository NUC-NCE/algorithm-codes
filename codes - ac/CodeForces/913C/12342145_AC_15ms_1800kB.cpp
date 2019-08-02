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
ll n,l;
ll c[40];
ull p[50]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648};
ll idx[40];
double C[40];
const unsigned long long INF=(1LL)<<62;
bool cmp(int A,int B)
{
    return C[A]<C[B];
}
int main()
{
    sd(n),sd(l);
    rep(0,n-1,i){
        slld(c[i]);
        C[i]=double(c[i])/p[i];
        idx[i]=i;
    }
    ll cnt=l,ans=INF,sum=0;
    int k=0,s=0;
    while(cnt>0){
        for(k=n-1;k>=0&&p[k]>cnt;k--)
            ans=min(ans,sum+c[k]);
        double r=INF;
        rep(0,k,i){
            if(r>=C[i]){
                r=C[i];
                s=i;
            }
        }
        sum+=(cnt/p[s])*c[s];
        cnt%=p[s];
        if(cnt==0)
            ans=min(ans,sum);
    }
    plld(ans);
    return 0;
}
