#include <cstdio>
#include <string.h>
#include <algorithm>
#include <algorithm>
#define INF 0x3f3f3f3f
using namespace std;
const int max_n=310;
char A[max_n][max_n];
int dp[max_n][max_n];
int main()
{
	int n,m,k;
	while(scanf("%d%d%d",&n,&m,&k)!=EOF)
	{
		if(n==0&&m==0&&k==0) break;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++) scanf("%s",&A[i][1]);
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) dp[i][j]+=dp[i-1][j]+(A[i][j]=='.'?1:0);
		// for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) printf("%d%c",dp[i][j],j==m?'\n':' ');
		int ret=INF;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j+i<=n;j++)
			{
				for(int l=0,r=1,ans=0;l<=m;)
				{
					while(ans<k&&r<=m)
					{
						ans+=dp[i+j][r]-dp[i-1][r];
						r++;
					}
					if(ans>=k) ret=min(ret,(j+1)*(r-l));
					ans-=dp[i+j][l]-dp[i-1][l];
					l++;
				}
			}
		}
		printf("%d\n",ret);
	}
        return 0;
}