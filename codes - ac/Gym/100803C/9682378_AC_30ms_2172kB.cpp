#include<bits/stdc++.h>
using namespace std;
int judge[30000];
int n,m;
int main()
{
    memset(judge,0,sizeof(judge));
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        for(int j=x;j<y;j++)
            judge[j]=1;

    }
    int ans=n+1;
    for(int i=0;i<=n;i++)
    {
        ans+=judge[i]*2;
    }
    printf("%d\n",ans);
    return 0;
}
