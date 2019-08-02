#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,n,w;
int a[100050];
int f[100050][21];
int m[100050][21];
void rmq_list(int a[])
{
    for(int i=1;i<=n;i++)
        f[i][0]=m[i][0]=a[i];
    for(int j=1;(1<<j)<n;j++)
    {
        for(int i=0;i+(1<<j)-1<=n;i++)
        {
                f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
                m[i][j]=min(m[i][j-1],m[i+(1<<(j-1))][j-1]);

        }
    }
}
int rmq(int l,int r)
{
    int k=0;
    while((1<<(k+1))<=r-l+1)
        k++;
    int maxn=max(f[l][k],f[r-(1<<k)+1][k]);
    int minn=min(m[l][k],m[r-(1<<k)+1][k]);
    return maxn;

}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        rmq_list(a);
        scanf("%d",&w);
        while(w--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",rmq(x,y));
        }
    }
    return 0;
}
