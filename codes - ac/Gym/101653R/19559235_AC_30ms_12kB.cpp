#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100][10];
void init()
{
    for(int i=1;i<=9;i++)
        dp[1][i]=1;
    for(int i=1;i<=80;i++)
        for(int j=1;j<=9;j++)
            for(int k=j;k<=9;k++)
                dp[i][j]+=dp[i-1][k];
}
int main()
{
    int t;
    init();
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        int num=1;
        for(int i=1;i<len;i++){
            if(s[i]==s[i-1]||s[i]>s[i-1])
                num++;
        }
        if(num!=len){
            puts("-1");
            continue;
        }
        ll ans=1LL;
        for(int i=1;i<len;i++)
            for(int j=1;j<=9;j++)
                ans+=dp[i][j];
        int k;
        for(int i=0; i<len; i++){
            if(i==0) k=1;
            else k=s[i-1]-'0';
            for(int j=k;j<s[i]-'0';j++){
                ans+=dp[len-i][j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
