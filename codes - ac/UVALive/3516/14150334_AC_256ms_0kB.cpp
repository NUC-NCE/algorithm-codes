#include<bits/stdc++.h>
using namespace std;
const int maxn = 310;
const int mod=1000000000;
typedef long long ll;

char s[maxn];
int d[maxn][maxn];
int dp(int i,int j){
	if(i==j)
		return 1;
	if(s[i]!=s[j])
		return 0;
	int& ans=d[i][j];
	if(ans>=0)
		return ans;
	ans=0;
	for(int k=i+2;k<=j;k++)
		if(s[i]==s[j])
			ans=(ans+(ll)dp(i+1,k-1)*(ll)dp(k,j))%mod;
	return ans;
}
int main()
{
	while(scanf("%s",s)!=EOF){
		memset(d,-1,sizeof(d));
		printf("%d\n",dp(0,strlen(s)-1));
	}
	return 0;
}
