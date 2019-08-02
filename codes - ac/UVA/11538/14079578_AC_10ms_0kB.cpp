#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
typedef unsigned long long ul;
int main(int argc, char const *argv[])
{
	ul n,m;
	while(cin>>n>>m&&(n+m)){
		if(n>m)
			swap(n,m);
		ul p=n*m*(m-1)+m*n*(n-1)+2*n*(n-1)*(3*m-n-1)/3;
		cout<<p<<endl;
	}
	return 0;
}