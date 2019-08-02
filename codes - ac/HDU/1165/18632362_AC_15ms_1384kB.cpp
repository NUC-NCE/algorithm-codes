#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dfs(ll n,ll m){
    if(n==0)
        return m+1;
    if(n==1)
        return m+2;
    if(n==2)
        return m*2+3;
    if(m==0)
        return dfs(n-1,1);
    return dfs(n-1,dfs(n,m-1));

}
int main()
{
    ll n,m;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        printf("%lld\n",dfs(n,m));
    }
    return 0;
}
