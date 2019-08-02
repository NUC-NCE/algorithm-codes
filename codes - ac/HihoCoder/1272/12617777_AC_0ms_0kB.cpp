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
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t;
    cin>>t;
    while(t--){
       int x,a[110],b[110];
       int ans=0;
       cin>>x;
       rep(1,x,i){
            double z;
            cin>>z>>b[i];
            a[i]=(2*z);
       }
       a[x+1]=a[x+2]=0;
       b[x+1]=b[x+2]=0;
       rep(1,x+2,i)
            rep(i+1,x+2,j)
                rep(j+1,x+2,k)
                    if((a[i]+a[j]+a[k])%10==0)
                        ans=max(ans,b[i]+b[j]+b[k]);
        cout<<ans<<endl;
    }
    return 0;
}