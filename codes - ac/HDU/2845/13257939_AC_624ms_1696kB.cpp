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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a[201000];
int b[201000];
int main(){
    int n,m,i,j,k;
    while(~(sd(m),sd(n))){
        rep(1,m,i){
            rep(1,n,j){
                sd(b[j]);
            }
            rep(2,n,k){
                b[k]=max(b[k-2]+b[k],b[k-1]);
            }
            a[i]=b[n];
        }
        rep(2,m,i)
            a[i]=max(a[i-2]+a[i],a[i-1]);
        pd(a[m]);
    }
    return 0;
}
