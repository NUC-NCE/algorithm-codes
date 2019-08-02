#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 2*1e5+10;
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
    build(mid+1,r,(rt<<1)|1);
    A[rt] = max(A[rt<<1],A[(rt<<1)|1]);
}
void update(int pos,int val,int l,int r,int rt)
{
    if( l == r)
    {
        A[rt] = val;
        return ;
    }
    int mid = (l+r)>>1;
    if(pos <= mid) update(pos,val,l,mid,rt<<1);
    else update(pos,val,mid+1,r,(rt<<1)|1);
    A[rt] = max(A[rt<<1],A[(rt<<1)|1]);
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
        ans = max(ans, query(L,R,l,mid,rt<<1));
    if(R>mid)
        ans = max(ans, query(L,R,mid+1, r,rt<<1|1));
    return ans;

}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int i,j;
        char s[5];
        for(i = 1; i <= n; i++)
            scanf("%d",&B[i]);
        build(1,n,1);
        while(m--)
        {
            int L,R;
            scanf("%s%d%d",s, &L, &R);
            if(s[0] == 'U')
            {
                update(L,R,1,n,1); 
            }
            else printf("%d\n",query(L,R,1,n,1));
        }
    }
    return 0;
}