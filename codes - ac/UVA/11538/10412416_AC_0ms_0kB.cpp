#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(~scanf("%lld%lld",&n,&m)&&(n||m))
    {
        if(n>m)
            swap(n,m);
        ll hang,lie,duijiaoxian;
        hang=n*m*(m-1);
        lie=n*m*(n-1);
        duijiaoxian=(2*n*(n-1)*(3*m-n-1))/3;
        ll ans=hang+lie+duijiaoxian;
        printf("%lld\n",ans);
    }
    return 0;
}