#include<bits/stdc++.h>
int x[100010];
int y[100010];
int p[200020];
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
    {
        scanf("%d%d",&n,&m);
        memset(p,0,sizeof(p));
        for(int i=0;i<n;i++)
            scanf("%d%d",&x[i],&y[i]);
        int ans=0;
        for(int i= 0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int res=abs(x[i]-x[j])+abs(y[i]-y[j]);
                if(p[res]==1)
                {
                    ans=1;
                    break;
                }
                p[res]=1;
            }
            if(ans==1)
                break;
        }
        if(ans==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}