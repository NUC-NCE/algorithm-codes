#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,num=7777744444;
void dfs(ll a,ll x,ll y)
{
    if(a>=n&&x==y)
        num=min(num,a);
    if(a>n*100)
            return;
    dfs(a*10+7,x,y+1);
    dfs(a*10+4,x+1,y);
}
int main()
{
    scanf("%lld",&n);
    dfs(0,0,0);
    printf("%lld\n",num);
    return 0;
}