#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int q,m;
int query[100100],x;
int flag[100100];
int main()
{
    scanf("%d",&t);
    for(int s=1;s<=t;s++)
    {
        memset(flag,0,sizeof(flag));
        scanf("%d %d",&q,&m);
        printf("Case #%d:\n",s);
        int j=1;
        ll ans=1;
        for(int i=1;i<=q;i++){
            scanf("%lld %lld",&x,&query[i]);
            if(x==1){
                ans=(ans*query[i])%m;
            }
            else if(x==2){
                ans=1;
                flag[query[i]]=1;
                flag[i]=1;
                for(int j=1;j<=i;j++){
                    if(!flag[j]) ans=(ans*query[j])%m;
                }
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
