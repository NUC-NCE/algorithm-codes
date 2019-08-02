#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=300;
int a[maxn];
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n*2;i++)
        cin>>a[i];
    int minn=1e9;
    int ans=0;
    for(int i = 0;i<n*2;i++)
    {
        if(a[i]==-1)
            continue;
        for(int j = i+1;j<n*2;j++)
        {
            if(a[j] == a[i]) {
                a[j] = a[i] = -1;
                break;
            }
            if(a[j]!=-1)
                ans++;
        }
    }
    cout<<ans;
}