#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int n,t;
int a[2000];
int dp[2000];
int main()
{
	while(cin>>n){
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int res=0;
		for(int i=1;i<=n;i++){
			dp[i]=1;
			for(int j=1;j<=i;j++){
				if(a[j]<a[i]){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			res=max(dp[i],res);
		}
		cout<<res<<endl;
	}
	return 0;
}