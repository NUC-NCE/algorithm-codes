#include<bits/stdc++.h>
using namespace std;
pair<int, int>itv[1005];
int p[1005];
bool operator<(pair<int,int>a,pair<int,int>b)
{
    return a.first<b.first;
}
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&itv[i].second);
            itv[i].first=-1;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            for(int j=0;j<n;j++)
            {
                if(itv[j].second==p[i]&&itv[j].first==-1)
                {
                    itv[j].first=i;
                    break;
                }
            }
        }
        int l,r;
        while(m--)
        {
            scanf("%d%d",&l,&r);
            sort(itv+l-1,itv+r);
        }
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            if(itv[i].second!=p[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
           printf("Yes\n");
        else
           printf("No\n");
    }
    return 0;
}
