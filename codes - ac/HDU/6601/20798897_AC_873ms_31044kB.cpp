#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 7;

int cnt = 0;
ll a[maxn];
int root[maxn];
ll s[maxn];
int n;
struct Node
{
    int lc, rc;
    ll w;
} tree[maxn * 40];
bool cmp(ll x, ll y)
{
    return x>y;
}
ll getid(ll x) {
	return lower_bound(s + 1, s + n + 1, x) - s;
}
ll update(ll last, ll l, ll r, ll x) {
	int now = ++cnt;
	tree[now] = tree[last];
	tree[now].w = tree[last].w + 1;
	if (l == r)
		return now;
	int mid = (l + r) >> 1;
	if (x <= mid)
		tree[now].lc = update(tree[last].lc, l, mid, x);
	else
		tree[now].rc = update(tree[last].rc, mid + 1, r, x);
	return now;
}
ll query(ll L, ll R, ll l, ll r, ll K) {//查询区间第k大
	if (l == r)
		return l;
	int mid = (l + r) >> 1;
	int x = tree[tree[R].lc].w - tree[tree[L].lc].w;
	if (x < K)
		return query(tree[L].rc, tree[R].rc, mid + 1, r, K - x);
	else
		return query(tree[L].lc, tree[R].lc, l, mid, K);
}
bool check(int id1,int id2,int id3){
    ll x=s[id1],y=s[id2],z=s[id3];
    if(x+1LL*y>z&&x-y<z) return 1;
    return 0;
}
int main()
{
    int N, Q;
    while(scanf("%d%d",&N,&Q)!=EOF)
    {
        for (int i = 1; i <= N; i++)
        {
            scanf("%d",&a[i]);
            s[i] = a[i];
        }
        sort(s + 1, s + 1 + N);
        n = unique(s + 1, s + 1 + N) - s - 1;//离散化
        cnt=0;
        for (int i = 1; i <= N; i++)
            root[i] = update(root[i - 1], 1, n, getid(a[i]));
        int L, R;
        ll ans=-1;
        while (Q--)
        {
            ans=-1;
            scanf("%d%d",&L,&R);
            vector<ll>vec;
            int pos = R - L +1;
            for (int k = 44; k >= 1 && pos; k--)
            {
                if(pos<=2) break;
                int id1 = query(root[L - 1], root[R], 1, n, pos);
                int id2 = query(root[L - 1], root[R], 1, n, pos-1);
                int id3 = query(root[L - 1], root[R], 1, n, pos-2);
                --pos;
                if(check(id1,id2,id3)){
                    ans=s[id1]+1LL*s[id2]+1LL*s[id3];
                    break;
                }
            }
            printf("%lld\n",ans);

        }

    }
    return 0;
}
