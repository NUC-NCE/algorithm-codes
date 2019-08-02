#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll a[maxn],b[maxn],c[maxn];
ll n,m;
int main()
{
    cin>>n>>m;
    c[0]=0;
    for (int i=1;i<=n;i++)
        cin>>a[i], c[i]=c[i-1]+a[i];
    for (int i=1;i<=m;i++) cin>>b[i];
    int pos=1;
    for (int i=1;i<=m;i++)
        for (int j=pos;j<=n;j++) 
            if (b[i]<=c[j]){
                cout<<j<<" "<<b[i]-c[j-1]<<endl;
                pos=j;
                break;
            }
    return 0;
}