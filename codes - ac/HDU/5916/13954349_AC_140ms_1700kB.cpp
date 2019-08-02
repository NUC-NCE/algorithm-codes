#include<bits/stdc++.h>
using namespace std;
const int maxn=5e3+100;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int res=1;res<=t;res++){
        int n,k;
        cin>>n>>k;
        cout<<"Case #"<<res<<":";
        for(int i=1;i<=k;i++)
            cout<<" "<<2*i;
        for(int i=1;i<=k;i++)
            cout<<" "<<2*i-1;
        for(int i=2*k+1;i<=n;i++)
            cout<<" "<<i;
        cout<<endl;
    }
    return 0;
}