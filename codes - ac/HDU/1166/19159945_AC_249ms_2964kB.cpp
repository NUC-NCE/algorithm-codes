#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 210000 + 5;
int ary[maxn];  //存储每一个工兵营的人数
struct Tree
{
	int l, r;
	int val;
}tree[maxn];
void pushup(int cur)//把子节点的信息汇总到了父节点上
{
	tree[cur].val = tree[2 * cur].val + tree[2 * cur + 1].val;
	//父节点是两个子节点的和，一直往上传值，就能使根节点是所有人的个数
}
void build(int l, int r, int step)
{
	int mid = (l + r) / 2;
	tree[step].val = 0;
	tree[step].l = l;
	tree[step].r = r;
	if (l == r)//如果到达叶节点就把人数赋给该节点
	{
		tree[step].val = ary[l];
		return;
	}
	//如果不是叶节点，就一直递归找左右孩子，然后知道找到叶节点进行传值
	build(l, mid, 2 * step);
	build(mid + 1, r, 2 * step + 1);
	//将子节点的人数进行汇总，给父节点
	pushup(step);
}
//单点值的更改，找指定的叶节点
void update(int tar, int val, int step)
{
	int l = tree[step].l, r = tree[step].r;
	if (l == r)
	{
		tree[step].val = tree[step].val + val;
		return;
	}
	int mid = (l + r) / 2;
	if (tar <= mid)    
		update(tar, val, 2 * step);
	else    
		update(tar, val, 2 * step + 1);
	pushup(step);
}
int query(int ql, int qr, int cur)//查询区间值
{
	int l = tree[cur].l, r = tree[cur].r;
	if (ql <= l && qr >= r)  
		return tree[cur].val;
	int mid = (l + r) / 2, res = 0;
	//如果不能完全包含，就去找他的左右孩子
	if (ql <= mid)  
		res += query(ql, qr, 2 * cur);
	if (qr > mid)  
		res += query(ql, qr, 2 * cur + 1);
	return res;
}
int main()
{
	int t, n;
	scanf("%d", &t);
	for (int test = 1; test <= t; test++)
	{
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) 
			scanf("%d", &ary[i]);
		build(1, n, 1);
		printf("Case %d:\n", test);
		char str[10];
		while (scanf("%s", str) != NULL && strcmp(str, "End") != 0)
		{
			if (strcmp(str, "Query") == 0)
			{
				int ql, qr;
				scanf("%d%d", &ql, &qr);
				printf("%d\n", query(ql, qr, 1));
			}
			else if (strcmp(str, "Add") == 0)
			{
				int c, m;
				scanf("%d%d", &c, &m);
				update(c, m, 1);
			}
			else if (strcmp(str, "Sub") == 0)
			{
				int c, m;
				scanf("%d%d", &c, &m);
				update(c, -m, 1);
			}
		}
	}
	return 0;
}