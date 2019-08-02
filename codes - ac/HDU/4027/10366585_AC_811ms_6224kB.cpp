#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
#define lson o << 1
#define rson o << 1 | 1
#define N 100010
typedef long long LL;

int c[N << 2];
LL sum[N << 2];

void pushup(int o)
{
    sum[o] = sum[lson] + sum[rson];
    c[o] = c[lson]&&c[rson];
}

void build(int o,int l,int r)
{
    if(l == r)
    {
        scanf("%lld",&sum[o]);
        return;
    }
    int mid = (l+r) >> 1;
    build(lson,l,mid);
    build(rson,mid+1,r);
    pushup(o);
}

int ll,rr;
LL query(int o,int l,int r)
{
    if(ll <= l && rr >= r) return sum[o];
    int mid = (l+r) >> 1;
    LL ans = 0;
    if(ll <= mid) ans += query(lson,l,mid);
    if(rr > mid) ans += query(rson,mid+1,r);
    return ans;
}

void update(int o,int l,int r)
{
    if(l == r)
    {
        sum[o] =sqrt(sum[o]);
        if(sum[o] <= 1) c[o] =1;
        return;
    }
    int mid = (l+r) >> 1;
    if(ll <= mid && !c[lson]) update(lson,l,mid);
    if(rr > mid && !c[rson])update(rson,mid+1,r);
    pushup(o);
}

int main()
{
    int n,m,op,k=1;
   while(scanf("%d",&n)!=EOF) 
   {
	   	memset(sum,0,sizeof(sum));
	   	memset(c,0,sizeof(c));
	    build(1,1,n);  
		printf("Case #%d:\n",k++); 
	    scanf("%d",&m);
	    while(m--)
	    {
	        scanf("%d%d%d",&op,&ll,&rr);
	        if(ll>rr)
	        {
	        	int t=ll;
				ll=rr;
				rr=t; 
			}
	        if(op) printf("%lld\n",query(1,1,n));
	        else
	            update(1,1,n);
	    }
	    printf("\n");
	}
    return 0;
}