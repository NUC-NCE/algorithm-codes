#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =2e5+100;

struct node{
    int val;
    ll w;
    int id;
}a[maxn];

struct tree{
    int val;
    int l,r;
    ll sum;
}tree[maxn*4];

bool cmp(node x,node y){
    if(x.w==y.w)
        return x.id<y.id;
    return x.w<y.w;
}

bool cmp1(node x,node y){
    return x.id<y.id;
}

void build(int l,int r,int rt){
    tree[rt].sum=0;
    tree[rt].val=0;
    tree[rt].l=l;
    tree[rt].r=r;
    if(l==r)
    {
        return ;
    }
    int mid=(l+r)>>1;
    build(l,mid,rt<<1);
    build(mid+1,r,rt<<1|1);
}
void update(int pos,ll sum,int rt){
    if(tree[rt].l==tree[rt].r){
        tree[rt].val=1;
        tree[rt].sum=sum;
        return ;
    }
    int mid = ( tree[rt].l + tree[rt].r )>>1;
    if(pos<=mid)
        update(pos,sum,rt<<1);
    else
        update(pos,sum,rt<<1|1);
    tree[rt].val=tree[rt<<1].val+tree[rt<<1|1].val;
    tree[rt].sum=tree[rt<<1].sum+tree[rt<<1|1].sum;
}

int query(ll sum,int rt){
    if(tree[rt].sum<=sum)
        return tree[rt].val;
    if(tree[rt].l==tree[rt].r)
        return (tree[rt].sum<=sum?1:0);
    if(tree[rt<<1].sum>=sum)
        query(sum,rt<<1);
    else
        return tree[rt<<1].val+query(sum-tree[rt<<1].sum,rt<<1|1);
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i].w);
            a[i].id=i;
        }
        sort(a+1,a+1+n,cmp);
        for(int i=1;i<=n;i++)
            a[i].val=i;
        sort(a+1,a+1+n,cmp1);
        build(1,n,1);
        for(int i=1;i<=n;i++){
            ll ans=i-query(m-a[i].w,1)-1;
            printf("%lld ",ans);
            update(a[i].val,a[i].w ,1);
        }
        printf("\n");
    }
    return 0;
}
