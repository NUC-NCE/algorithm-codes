#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
const int maxn=1e5+100;
int n;
int a[maxn];
int sum[maxn];
int lowbit(int x)
{
    return x&(-x);
}

void update(int pos,int num)
{
    while(pos<=n)
    {
        sum[pos]+=num;
        pos+=lowbit(pos);
    }
}

int getsum(int pos)
{
    int ans=0;
    while(pos>0)
    {
        ans+=sum[pos];
        pos-=lowbit(pos);
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        memset(sum,0,sizeof(sum));
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            a[i]+=x;
            update(i,x);
        }
        printf("Case %d:\n",cas);
        while(1){
            char s[20];
            int x,y;
            scanf("%s",s);
            if(s[0]=='Q'){
                scanf("%d%d",&x,&y);
                printf("%d\n",getsum(y)-getsum(x-1));
            }
            else if(s[0]=='A'){
                scanf("%d%d",&x,&y);
                a[x]+=y;
                update(x, y);
            }
            else if('S'==s[0]){
                scanf("%d%d",&x,&y);
                a[x]-=y;
                update(x,-y);
            }
            else if('E'==s[0])
                break;
        }
    }
    return 0;
}
