#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7+100;
int dp[maxn];
void init(){
    dp[1]=1;
    dp[2]=2;
    dp[3]=2;
    int ret=3;
    for(int i=4;i<=maxn-50;i++){
        if(dp[ret]==1){
            if(dp[i-1]==1)
                dp[i]=2;
            else
                dp[i]=1;
            ret++;
        }
        else{
            if(dp[i-1]==1){
                dp[i+1]=dp[i]=2;
            }
            else{
                dp[i+1]=dp[i]=1;
            }
            i++;
            ret++;
        }
    }
}

int main(){
    int t;
    init();
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);

        printf("%d\n",dp[a]);
    }
    return 0;
}
