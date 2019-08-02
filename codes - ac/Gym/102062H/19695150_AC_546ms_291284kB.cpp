#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4+100;
char s[maxn];
int dp[6100][6100];
int ansdp[6100][6100];
int tolerance_init(int n){
    for(int i=1;i<=n;i++){
        //cout<<i<<endl;
        for(int j=0;j<=n;j++){
           // cout<<"\t"<<j<<endl;
            if(i+j>n||i-j<=0)
                break;
            if(j==0){
                dp[i][0] = abs(s[i+j]-s[i-j]);
                ansdp[i-j][i+j] = dp[i][0];
            }
            else{
                dp[i][j] = dp[i][j-1] + abs(s[i+j]-s[i-j]);
                ansdp[i-j][i+j] = dp[i][j];
            }
        }
    }
    for(int i=1;i<n;i++){
        int p = i,q=i+1;
        int pre = 0;
        for(int j=0;j<=n;j++){
            if(p-j<=0||q+j>n)
                break;
            ansdp[p-j][q+j] = pre + abs(s[p-j]-s[q+j]);
            pre = ansdp[p-j][q+j];
        }
    }
}
inline int tolerance(int a,int b){
    if(b<=a)
        return 0;
    return ansdp[a][b];
}
void deal(){
    scanf("%s",s+1);
    int q;
    int len = strlen(s+1);
    tolerance_init(len);
    scanf("%d",&q);
    int a,b,c;
    while(q--){
        scanf("%d%d%d",&a,&b,&c);
        int ans = len+10;
        int l = 0,r = b-a+1;
        while(l<=r){
            int mid = (r+l)/2;
            int ok = 0;
            int sum = tolerance(a+mid,b-mid);
            if(sum<=c){
                r = mid - 1;
                if(ans>mid){
                    ans = mid;
                }
            }
            else{
                l = mid + 1;
            }
        }
        printf("%d\n",(b-ans)-(a+ans)+1);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        deal();
    return 0;
}
