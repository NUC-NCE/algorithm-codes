#include"stdio.h"
#include"cstdio"
#include"string.h"
#include"algorithm"
using namespace std;
const int max_n=1e5+10;
int A[max_n],B[max_n],C[max_n];
int main()
{
	int n,m,l;
	while(scanf("%d%d%d",&n,&m,&l)!=EOF)
	{
		int i,ret=0x3f3f3f3f;
		A[0]=B[0]=C[0]=0x3f3f3f3f;
		for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
		for(i=1;i<=m;i++)
		scanf("%d",&B[i]);
		for(i=1;i<=l;i++)
		scanf("%d",&C[i]);
		sort(A+1,A+n+1);
		sort(B+1,B+m+1);
		sort(C+1,C+l+1);
		for(i=1;i<=n;i++)
		{
			int b1,b2,c1,c2;
			b1=B[lower_bound(B+1,B+1+m,A[i])-B];
			b2=B[lower_bound(B+1,B+1+m,A[i])-B-1];
			c1=C[lower_bound(C+1,C+1+l,A[i])-C];
			c2=C[lower_bound(C+1,C+1+l,A[i])-C-1];
			ret=min(ret,abs(b1-c1)+abs(b1-A[i])+abs(A[i]-c1));
			ret=min(ret,abs(b1-c2)+abs(b1-A[i])+abs(A[i]-c2));
			ret=min(ret,abs(b2-c2)+abs(b2-A[i])+abs(A[i]-c2));
		}
		printf("%d\n",ret);
	}
}