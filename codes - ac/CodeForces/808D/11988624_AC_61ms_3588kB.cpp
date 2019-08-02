#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define sx(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x));
using namespace std;
typedef long long ll;
int t;
int n;
ll a[100100];
ll sum[100100];
int main()
{
    sx(n);
    rep(1,n,i)
        sx(a[i]),sum[i]+=sum[i-1]+a[i];
    if(sum[n]%2){
        puts("NO");
        return 0;
    }
    int d=sum[n]/2;
    int flag=0;
    rep(1,n,i){
        ll ans=sum[n]/2-a[i],res=sum[n]/2+a[i];
        if(binary_search(sum+1,sum+i,ans)||binary_search(sum+i+1,sum+n+1,res)){
            puts("YES");
            flag=1;
            break;
        }
    }
    if(!flag)
        puts("NO");
}
