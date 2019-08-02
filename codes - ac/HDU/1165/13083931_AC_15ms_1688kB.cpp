#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll a,ll b){
    if(a==0)
        return b+1;
    if(a==1)
        return b+2;
    if(a==2)
        return b*2+3;
    if(b==0)
        return solve(a-1,1);
    else
        return solve(a-1,solve(a,b-1));
}
int main()
{
    ll a,b;
    while(~scanf("%lld%lld",&a,&b)){
        printf("%lld\n",solve(a,b));
    }
}