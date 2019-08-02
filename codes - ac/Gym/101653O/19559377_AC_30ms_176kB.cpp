#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
    double x,y;
    bool operator>(const node &a)const{
        return x>a.x&&y<a.y;
    }
    node(){}
}nd[250];
int dp[250];
int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(dp,0,sizeof(dp));
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>nd[i].x>>nd[i].y;
            dp[i]=1;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(nd[i]>nd[j]) dp[i]=max(dp[i],dp[j]+1);
                ans=max(dp[i],ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}