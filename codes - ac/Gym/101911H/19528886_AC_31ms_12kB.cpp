#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a,b,x,y;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    cin>>a>>b>>x>>y;
    ll ret=0;
    if(b%2==0)
        ret+=(x-a+1);
    if((m-y)%2==1)
        ret+=(x-a+1);
    if(m%2)
        ret+=(n-(x-a+1));
    cout<<(ret+1)/2<<endl;
    return 0;
}
