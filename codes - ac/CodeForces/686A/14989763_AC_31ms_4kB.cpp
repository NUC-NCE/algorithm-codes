#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=31000;
int main(){
    ll x,y;
    ll ans=0;
    cin>>x>>y;
    while(x--){
        ll n;
        char c[2];
        cin>>c>>n;
        //scanf("%s%*c%d",c,&n);
        if(c[0]=='+')
            y+=n;
        else if(c[0]=='-')
            if(y>=n)
                y-=n;
            else
                ans++;
    }
    cout<<y<<" "<<ans<<endl;
    return 0;
}
