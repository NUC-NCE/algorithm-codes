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
#define plf(d) printf("%.0lf\n",d)
#define eps 1
using namespace std;
typedef long long ll;
int a[50];
int main(){
    double a,b;
    int c;
    while(cin>>a>>b>>c){
        a=1+a/100;
        while(c--){
            b*=a;
        }
        int d=b;
        pd(d);
    }
    return 0;
}
