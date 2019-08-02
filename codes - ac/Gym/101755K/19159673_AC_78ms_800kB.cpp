#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200100];
bool check(int x){
    int num=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]<=num)
            num++;
        else{
            if(x){
                num++;
                ans++;
                x--;
            }
        }
    }
    return num>=m;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int l=0;
    int r=n;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}
