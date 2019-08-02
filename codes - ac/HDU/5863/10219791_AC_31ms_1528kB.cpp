#include"stdio.h"
#include"cstdio"
#include"algorithm"
#include"string.h"
using namespace std;
typedef long long ll;
const int max_n=20;
const int mod=1e9+7;
struct Mat
{
	ll m[max_n][max_n];
	int row,col;
};
Mat multy(Mat X,Mat Y)
{
	Mat Z;
	Z.col=Z.row=X.col;
	memset(Z.m,0,sizeof(Z.m));
	for(int i=0;i<Z.col;i++)
	{
		for(int j=0;j<Z.col;j++)
		{//printf("%d ",Y.m[i][j]);
			
			for(int k=0;k<Z.col;k++)
			Z.m[i][j]=(Z.m[i][j]+X.m[i][k]*Y.m[k][j])%mod;
			
		}//printf("\n");
	}
	return Z;
}
ll speed(Mat C,int n)
{
	Mat D;
	D.row=D.col=C.col;
	int i;
	//memset(D.m,0,sizeof(D.m));
	for(i=0;i<D.col;i++)
	{
		for(int j=0;j<D.col;j++)
		{
			D.m[i][j]=(i==j);

		}
	}
	while(n)
	{
		if(n&1) D=multy(D,C);
		C=multy(C,C);
		n>>=1;
	}
	ll ret=0;
	for(i=0;i<D.col;i++)
	ret=(ret+D.m[i][0])%mod;
	return ret;
}
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			int n,mm,k;
			scanf("%d%d%d",&n,&mm,&k);
			Mat A,B;
			A.row=A.col=mm+1;
			B.row=B.col=mm;
			memset(A.m,0,sizeof(A.m));
			memset(B.m,0,sizeof(B.m));
			for(int i=0;i<A.col;i++)
			{
				A.m[i+1][i]=k;
				A.m[0][i]=k*k-k;
			}
			//for(int i=1;i<A.col;i++)
			//A.m[i][i-1]=k;
			for(int i=0;i<B.col;i++)
			{
				B.m[i+1][i]=k;
				B.m[0][i]=k*k-k;
			}
			//for(int i=1;i<B.col;i++)
			//B.m[i][i-1]=k;
			ll ret=speed(A,n)-speed(B,n);
			printf("%lld\n",(ret%mod+mod)%mod);
		}
	}
}