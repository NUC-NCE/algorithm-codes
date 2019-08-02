#include<cstdio>
#include<cstring>
#include<math.h>
using namespace std;
#define ll long long
ll A[500005];
ll A1[500005];
ll B[500005];
int n,m;
int lowbit(int x)
{
    return x&(-x);
}
void update(ll*arry,int pos,int a)
{
    while(pos<=n)
    {
        arry[pos]+=a;
        pos+=lowbit(pos);
    }
}
ll fun(ll*arry,int x)
{
    ll sum=0;
    while(x>0)
    {
        sum+=arry[x];
        x-=lowbit(x);
    }
    return sum;
}
int main()
{
    int x,i,y,z;
    while(~scanf("%d %d",&n,&m))
    {
        memset(A,0,sizeof(A));
        memset(A1,0,sizeof(A1));
        memset(B,0,sizeof(B));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            B[i]+=B[i-1]+x;
        }
        char s;
        for(int i=1;i<=m;i++)
        {
            getchar();
            scanf("%c",&s);
            if(s=='C')
            {
                scanf("%d%d%d",&x,&y,&z);
                update(A,x,z);
                update(A,y+1,-z);
                update(A1,x,z*x);
                update(A1,y+1,-z*(y+1));
            }
            else
            {
                scanf("%d %d",&x,&y);
                ll sum=-B[x-1]-x*fun(A,x-1)+fun(A1,x-1);
                sum+=B[y]+(y+1)*fun(A,y)-fun(A1,y);
                printf("%I64d\n",sum);
            }
        }
    }
    return 0;
}
