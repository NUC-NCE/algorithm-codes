#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        if(a*a>2LL*b*b)
            puts("1");
        else
            puts("2");
    }

    return 0;
}
