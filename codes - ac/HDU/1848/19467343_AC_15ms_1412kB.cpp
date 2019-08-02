#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =2e3+100;
int f[maxn];
int s[maxn];
int vis[maxn];

void init(){
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=16;i++)
        f[i]=f[i-1]+f[i-2];
}
void get(int n){
    int i,j;
    memset(s,0,sizeof(s));
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof(vis));
        for(int j=1;f[j]<=i;j++)
            vis[s[i-f[j]]]=1;
        for(j=0;j<=n;j++){
            if(!vis[j]){
                s[i]=j;
                break;
            }
        }
    }
}
int main()
{
    init();
    get(2000);
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0)
            break;
        int ans=s[a]^s[b]^s[c];
        if(ans)
            puts("Fibo");
        else
            puts("Nacci");
    }
}
