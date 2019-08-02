#include <cstdio>
using namespace std;
int dp[150][150];
int main()
{
	int c,i,j;
	scanf("%d",&c);
	while(c--)
	{
		int n;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			for(j=1;j<=i;j++)
				scanf("%d",&dp[i][j]);
			for(i=n;i>=2;i--)
				for(j=1;j<n;j++)
					if(dp[i][j]>dp[i][j+1])
						dp[i-1][j]+=dp[i][j];
					else
						dp[i-1][j]+=dp[i][j+1];
			printf("%d\n",dp[1][1]);
	}
	return 0;
}