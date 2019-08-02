#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1100];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        ll ans=1;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            a[x]++;
            ans=ans*a[x]%7901;
        }
        printf("%lld\n",ans%7901);
    }
    return 0;
}
