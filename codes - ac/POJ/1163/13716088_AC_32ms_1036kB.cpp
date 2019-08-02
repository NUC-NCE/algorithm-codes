#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int n,t;
int a[200][200];
int dp[200][200];
int main()
{
	while(cin>>n){
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=i;j++)
				cin>>a[i][j];
		for(int i=1;i<=n;i++)
			dp[n][i]=a[n][i];
		for(int i=n-1;i>=1;i--)
			for(int j=1;j<=i;j++)
				dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
		cout<<dp[1][1]<<endl;
	}
	return 0;
}