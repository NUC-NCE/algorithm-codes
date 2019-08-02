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
typedef long long ll;
using namespace std;
const int maxn=1e6+20;
ll a,b,c,d,k,t,tot=0;
ll ans1,ans2;
bool is[maxn];
ll pri[maxn],miu[maxn];
void init()
{
    miu[1]=1;
    rep(2,100000,i){
        if(!is[i]){
            pri[++tot]=i;
            miu[i]=-1;
        }
        rep(1,tot,j){
            int k=pri[j]*i;
            if(k>100000)
                break;
            is[k]=1;
            if(i%pri[j]==0){
                miu[k]=0;
                break;
            }
            else
                miu[k]=-miu[i];
        }
    }
}

int main()
{
    int cnt=0;
    init();
    cin>>t;
    while(t--){
        cnt++;
        ans1=ans2=0;
        cin>>a>>b>>c>>d>>k;
        if(!k){
            cout<<"Case "<<cnt<<": 0"<<endl;
            continue;
        }
        b/=k;
        d/=k;
        if(b>d)
            swap(b,d);
        rep(1,b,i)
            ans1+=miu[i]*(b/i)*(d/i);
        rep(1,b,i)
            ans2+=miu[i]*(b/i)*(b/i);
        cout<<"Case "<<cnt<<": "<<ans1-ans2/2<<endl;
    }

    return 0;
}
