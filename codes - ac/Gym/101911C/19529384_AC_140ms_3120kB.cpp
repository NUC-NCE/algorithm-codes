#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e6+100;
priority_queue<ll,vector<ll>,greater<ll>>p;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ll x;
        scanf("%lld",&x);
        p.push(x);
    }
    ll ans=0;
    while(ans<maxn){

        if(p.size()==1){
            break;
        }
        ll a=p.top();
        p.pop();
        //cout<<"a:"<<p.top()<<" "<<a<<" "<<p.size()<<endl;
        if(a==p.top()){
            p.pop();
            p.push(a*2);
        }
        else{
            ans++;
            p.push(a*2);
        }

    }
    if(ans==maxn)
        ans=-1LL;
    printf("%lld\n",ans);
    return 0;
}
