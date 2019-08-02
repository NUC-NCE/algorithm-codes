#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e6+3;
ll fac[mod+10];

void init(){
    fac[1]=1;
    for(ll i=2;i<=mod;i++)
        fac[i]=1LL*fac[i-1]*i%mod;
}

int main(){
    init();
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n>mod)
            puts("0");
        else
            printf("%lld\n",fac[n]);
    }
    return 0;
}
