#include<bits/stdc++.h>
using namespace std;

const int maxn=1e5+7;
typedef long long ll;

ll b[maxn];
ll a[maxn];
int m;

void quchong(int n){
    sort(b+1,b+1+n);
    m=unique(b+1,b+1+n)-b-1;
}

int getid(int x){
    return lower_bound(b+1,b+1+m,x)-b;
}

int root[maxn];
struct Tree{
    int lc,rc;
    ll sum;
}tree[4322089];

int tot;

int build(int l,int r){
    int k=++tot;
    tree[k].sum=0;
    if(l==r){
        return k;
    }
    int mid=(l+r)>>1;
    tree[k].lc=build(l,mid);
    tree[k].rc=build(mid+1,r);
    return k;
}

int updata(int now,int l,int r,int id,int val){
    int k=++tot;
    tree[k]=tree[now];
    if(l==r){
        ++tree[k].sum;
        return k;
    }
    int mid=(l+r)>>1;
    if(id<=mid) tree[k].lc=updata(tree[now].lc,l,mid,id,val);
    else tree[k].rc=updata(tree[now].rc,mid+1,r,id,val);
    tree[k].sum=tree[tree[k].lc].sum+tree[tree[k].rc].sum;
    return k;
}

int myfind(int L,int R,int l,int r,int h){
    if(l==r) return l;
    int val=tree[tree[R].lc].sum-tree[tree[L].lc].sum;
    int mid=(l+r)>>1;
    if(h<=val) return myfind(tree[L].lc,tree[R].lc,l,mid,h);
    return myfind(tree[L].rc,tree[R].rc,mid+1,r,h-val);
}

bool check(int id1,int id2,int id3){
    int x=b[id1],y=b[id2],z=b[id3];
    if(x+1LL*y>z&&x-y<z) return 1;
    return 0;
}

int main(){
    int t;
    int n,q;

    while(scanf("%d%d",&n,&q)!=EOF){

        for(int i=1;i<=n;++i){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        quchong(n);
        tot=0;
        root[0]=build(1,m);
        for(int i=1;i<=n;++i)
            root[i]=updata(root[i-1],1,m,getid(a[i]),1);
        int l,r;
        ll res;
        while(q--){
            res=-1;
            scanf("%d%d",&l,&r);
            int k=r-l+1;
            //k=min(k,44);
            bool f=0;
            for(int tt=1;tt<=44;++tt){
                if(k<=2) break;
                int id1=myfind(root[l-1],root[r],1,m,k);
                int id2=myfind(root[l-1],root[r],1,m,k-1);
                int id3=myfind(root[l-1],root[r],1,m,k-2);
                --k;
                if(check(id1,id2,id3)){
                    f=1;
                    res=b[id1]+1LL*b[id2]+1LL*b[id3];
                    break;
                }
            }
            printf("%lld\n",res);
        }
    }

    return 0;
}