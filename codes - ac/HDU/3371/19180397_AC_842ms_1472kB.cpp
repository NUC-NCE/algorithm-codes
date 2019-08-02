#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=50050;
int fa[maxn];
int n,m,k;
struct node {
	int l,r,s;
} zz[maxn];
void qk(int n) {
	for(int i=0; i<=n; i++) {
		fa[i]=i;
	}
}
int find(int a) {
	return a==fa[a]? a:fa[a]=find(fa[a]);
}
void Union(int a,int b) {
	int A,B;
	A=find(a);
	B=find(b);
	if(A>B) {
		fa[B]=A;
	} else {
		fa[A]=B;
	}
}
bool cmp(node x,node y) {
	return x.s<y.s;
}
void jwz() {
	qk(n);
	for(int i=0; i<m; i++) {
		scanf("%d %d %d",&zz[i].l,&zz[i].r,&zz[i].s);
	}
	while(k--) {
		int t,a,b;
		scanf("%d %d",&t,&a);
		for(int i=1; i<t; i++) {
			scanf("%d",&b);
			Union(a,b);
		}
	}
	sort(zz,zz+m,cmp);
}
int Kurksal() {
	int sum=0;
	for(int i=0; i<m; i++) {
		if(find(zz[i].l)!=find(zz[i].r)) {
			Union(zz[i].l,zz[i].r);
			sum+=zz[i].s;
		}
	}
	int cut=0;
	for(int i=1;i<=n;i++){
		if(fa[i]==i)
		    cut++;
	}
	if(cut>1)
	    sum=-1;
	return sum;
}
int main() {
	int q;
	scanf("%d",&q);
	while(q--) {
		scanf("%d %d %d",&n,&m,&k);
		jwz();
		int ans;
		ans=Kurksal();
		printf("%d\n",ans);
	}
	return 0;
}