#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
ll n,m,k;
int a[105];
int main()
{
    while(~scanf("%lld",&n))
    {
        for(ll i=0;i<n;i++)
            scanf("%d",&a[i]);
        int minn=99999999;
        int ans;
        for(int i=-100;i<101;i++)
        {
            ans=0;
            for(int j=0;j<n;j++)
            {
                ans+=(i-a[j])*(i-a[j]);
            }
            minn=min(minn,ans);
        }
        cout<<minn<<endl;
    }
    return 0;
}
