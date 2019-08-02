#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[20][150][150];
int po[11];
void breaks(ll n)
{
	po[0]=0;
	stack<int >ST;//
	while(n){
		ST.push(n%10);
		n/=10;
	}
	while(!ST.empty())
	{
		po[++po[0]]=ST.top();
		ST.pop();
	}
}
ll sol(ll n,ll m)
{
	memset(dp,0,sizeof(dp));
	breaks(n);
	ll ans=0,ant=0;
	for(int i=1;i<=po[0];i++){
		for(int j=0;j<m;j++)
			for(int k=0;k<m;k++)
				for(int s=0;s<=9;s++)
					 dp[i][(j+s)%m][(k*10+s)%m]+=dp[i-1][j][k];
		for(int j=0;j<po[i];j++)
			dp[i][(ans+j)%m][(ant*10+j)%m]++;
		ans = (ans+po[i])%m;
        ant = (ant*10+po[i])%m;
	}
	if(ans==0&&ant==0)
        dp[po[0]][0][0]++;
    return dp[po[0]][0][0];
}
int main()
{
	ll n,m,k;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld",&n,&m,&k);
		if(k>99){
			puts("0");
		}
		else
			printf("%lld\n",sol(m,k)-sol(n-1,k));
	}
	return 0;
}