#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long ll;
const int maxn=1e4+10;
ll dp[maxn][maxn];
int main(int argc, char const *argv[])
{
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	for(int i=1;i*i*i<=10000;i++){
		for(int j=0;j<=10000;j++)
			if(j>=i*i*i)
				dp[i][j]=dp[i-1][j]+dp[i][j-i*i*i];
			else
				dp[i][j]=dp[i-1][j];
	}
	int n;
	while(cin>>n)
	{
		cout<<dp[21][n]<<endl;
	}
	return 0;
}