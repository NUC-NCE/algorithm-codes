#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+100;
ll f[maxn];
void init(){
	f[3]=0;
	for(ll x=4;x<=1000000;x++)
		f[x]=f[x-1]+((x-1)*(x-2)/2-(x-1)/2)/2;
}
int main()
{
	int n;
	init();
	while(cin>>n&&n>=3){
		cout<<f[n]<<endl;
	}
	return 0;
}