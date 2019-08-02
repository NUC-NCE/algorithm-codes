#include<cstdio>
#include<cstring>
using namespace std;
const int maxn = 50100;
int A[maxn<<2];
int B[maxn];
int n,q;
void build(int l,int r,int rt)
{
    if(l==r)
    {
        A[rt] = B[l];
        return ;
    }
    int mid = (l+r)>>1;
    build(l,mid,rt<<1);
    build(mid+1,r,rt<<1|1);
    A[rt] = A[rt<<1]+A[rt<<1|1];
}
void update(int pos,int val,int l,int r,int rt)
{
    if( l == r)
    {
        A[rt] = A[rt] + val;
        return ;
    }
    int mid = (l+r)>>1;
    if(pos <= mid)
        update(pos,val,l,mid,rt<<1);
    else
        update(pos,val,mid+1,r,rt<<1|1);
    A[rt] = A[rt<<1]+A[rt<<1|1];
}

int query(int L,int R,int l,int r,int rt)
{
    if(L<=l && R>=r)
    {
        return A[rt];
    }
    int mid = (l+r)>>1;
    int ans = 0;
    if( L<=mid)
        ans = ans+query(L,R,l,mid,rt<<1);
    if(R>mid)
        ans = ans+query(L,R,mid+1, r,rt<<1|1);
    return ans;
}
int main()
{
    int m;
    scanf("%d",&m);
    int j=1;
    while(m--)
    {
        int n;
        scanf("%d",&n);
        int i;
        char str[10];
        for(int i=1;i<=n;i++)
            scanf("%d",&B[i]);
        build(1,n,1);
        printf("Case %d:\n",j);
        while(~scanf("%s",str))
        {
            if(strcmp(str,"End")==0)
                break;
            int L,R,k;
            if(strcmp(str,"Query")==0)
            {
                scanf("%d %d", &L, &R);
                printf("%d\n",query (L,R,1,n,1));
            }
            if(strcmp(str,"Add")==0)
            {
                scanf("%d %d", &L, &R);
                update(L,R,1,n,1);
            }
            if(strcmp(str,"Sub")==0)
            {
                scanf("%d %d", &L, &R);
                update(L,-R,1,n,1);
            }
        }
        j++;
    }
    return 0;
}