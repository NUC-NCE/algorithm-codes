#include<bits/stdc++.h>
using namespace std;
int t;
int hour,mini;
int n,m;
bool flag[1015];
int times[1015];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        memset(times,0,sizeof(times));
        memset(flag,false,sizeof(flag));
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int num;
            char judge[15] = {'\0'};
            scanf("%d",&num);
            scanf("%d:%d",&hour,&mini);
            scanf("%s",judge);
            if(flag[num])
            {
                continue;
            }
            if(judge[0] == 'A')
            {
                times[num]+=(hour*60+mini);
                flag[num]=true;
            }
            else
                times[num]+=20;
            getchar();
        }
        int yes=0,sum=0;
        for(int i=1001;i<=1000+n;i++)
            if(flag[i])
            {
                sum+=times[i];
                yes++;
            }
        printf("%d %d\n",yes,sum);
    }
    return 0;
}
