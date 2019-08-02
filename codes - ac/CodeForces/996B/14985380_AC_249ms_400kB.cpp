#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+100;
int a[maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int minn=1e9;
    int ans;
    for(int i=1;i<=n;i++)
    {
        if(minn>((a[i]-i+n)/n))
        {
            minn=((a[i]-i+n)/n);
            ans=i;
        }
    }
    cout<<ans;
}
