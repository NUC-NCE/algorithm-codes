#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
char ch[105];
int main()
{
    int i=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int p=0;
        while(n--)
        {
            memset(ch,0,sizeof(ch));
            scanf("%s",ch);
            for(int i=0;i<m;i++)
            {
                if(ch[i]=='O')
                    p++;
            }
        }
        if(p%2==0)
            printf("Case %d: Fat brother\n",i);
        else
            printf("Case %d: Maze\n",i);
        i++;
    }
    return 0;
}
