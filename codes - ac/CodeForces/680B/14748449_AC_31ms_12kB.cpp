#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans=0;
    if(a[m])
        ans++;
    int l=m-1,r=m+1;
    for(;l>=1||r<=n;l--,r++){
        if(l>=1&&r<=n)
            if(a[l]==1 && a[r]==1)
                ans+=2;
        if(l>=1 && r>n)
            if(a[l]==1){
                ans++;
                //cout<<l<<" "<<r<<endl;
            }
        if(r<=n && l<1)
            if(a[r]==1)
                ans++;
        //cout<<l<<"--"<<r<<"  "<<a[l]<<"--"<<a[r]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
