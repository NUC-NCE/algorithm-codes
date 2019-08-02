#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s;
int a[200];
int main()
{
    cin>>n>>s;
    int maxn=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxn=max(maxn,a[i]);
    }
    cout<<(maxn*s+999)/1000<<endl;
    return 0;
}
