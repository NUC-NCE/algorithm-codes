#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000100];
ll n;
int k;
int main()
{
    cin>>n>>k;
    int ind;
    ll ans=-1;
    for(int i=1;i<=k;i++){
        cin>>a[i];
        if(ans<n/a[i]*a[i])
        {
            ans=n/a[i]*a[i];
            ind=i;
        }
    }
    cout<<ind<<" "<<n/a[ind]<<endl;
}
