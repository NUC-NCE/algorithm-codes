#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
char s1[1005],s2[1005];
int dp[1005][1005];
int len1,len2;
int main()
{
        ss(s1);
        ss(s2);
        len1=strlen(s1);
        len2=strlen(s2);
        int i,j;
        rep(0,len1,i)
            dp[i][0]=i;
        rep(0,len2,j)
            dp[0][j]=j;
        rep(1,len1,i){
            rep(1,len2,j){
                int cost=1;
                if(s1[i-1]==s2[j-1])
                    cost=0;
                int del=dp[i-1][j]+1;
                int ins=dp[i][j-1]+1;
                int sub=dp[i-1][j-1]+cost;
                dp[i][j]=min(min(del,ins),sub);
            }
        }
        pd(dp[len1][len2]);
    return 0;
}