#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int m,n,k;
const int maxn=5e2+10;
const int mod=1e6+7;
int c[maxn+10][maxn+10];
void init()
{
	memset(c,0,sizeof(c));
	c[0][0]=1;
	for(int i=0;i<=maxn;i++){
		c[i][0]=c[i][i]=1;
		for(int j=1;j<i;j++)
			c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
	}
}
int main()
{
	init();
	cin>>t;
	for(int zz=1;zz<=t;zz++){
		cin>>n>>m>>k;
		int sum=0;
		for(int i=0;i<16;i++){
			int b=0,r=n,q=m;
			if(i&1)
				r--,b++;
			if(i&2)
				r--,b++;
			if(i&4)
				q--,b++;
			if(i&8)
				q--,b++;
			if(b&1)
				sum=(sum+mod-c[r*q][k])%mod;
			else
				sum=(sum+c[r*q][k])%mod;
		}
		cout<<"Case "<<zz<<": "<<sum<<endl;
	}
}