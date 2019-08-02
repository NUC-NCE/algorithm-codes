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
int n,t,sum;
int main(){
    while(~sd(n)&&n){
        int p=1;
        int ans=n;
        sum=0;
        while(ans){
            int x=ans%10;
            ans/=10;
            if(x>8)
                x-=2;
            else if(x>3)
                x-=1;
            sum+=x*p;
            p*=8;
        }
        printf("%d: %d\n",n,sum);
    }
}
