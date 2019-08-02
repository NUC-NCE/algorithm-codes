#include <bits/stdc++.h>
using namespace std;
int x[30];
int dp[30];
int main(){
    int t;
    cin>>t;
    while(t--){
        x[0]=0;
        x[1]=3;
        dp[0]=0;
        dp[1]=2;
        int n;
        cin>>n;
        for(int i=2;i<=n;i++){
            dp[i]=x[i-1]+dp[i-1];
            x[i]=x[i-1]+2*dp[i-1];
        }
        cout<<x[n]<<endl;
    }
    return 0;
}
