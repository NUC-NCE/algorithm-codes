#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin>>x;
            if(__gcd(x,k)!=1)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
