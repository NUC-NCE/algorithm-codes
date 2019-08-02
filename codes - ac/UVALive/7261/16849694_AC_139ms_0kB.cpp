#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+100;
int T;
ll s[maxn];
ll x[maxn];
ll y[maxn];
ll w[maxn];
ll h[maxn];
int main()
{
    scanf("%d",&T);
    while(T--){
        ll R;
        scanf("%lld",&R);
        int m;
        scanf("%d",&m);
        for(int i=0;i<=maxn-10;i++)
            s[i]=x[i]=y[i]=w[i]=h[i]=0;
        ll sum=0;
        for(int i=1;i<=m;i++){
            scanf("%lld %lld %lld %lld",&x[i],&y[i],&w[i],&h[i]);
            sum+=w[i]*h[i];
        }
        sum=(sum+1)/2;
        for(int i=1; i<=m; i++){
            s[x[i]]+=h[i];
            s[x[i]+w[i]]-=h[i];
        }
        int pos;
        ll d=s[0];
        ll ret=0;
        for(int i=1;i<=R;i++){
            ret+=d;
            if(ret>=sum){
                pos=i;
                d+=s[i];
                while(d==0&&pos<R){
                    pos++;
                    d+=s[pos];
                }
                break;
            }
            d+=s[i];
        }
        printf("%d\n",pos);
    }
    return 0;
}
