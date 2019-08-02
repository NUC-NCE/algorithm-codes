#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,m;
	cin>>n>>m;
	int a,b;
	while(m--)
		cin>>a>>b;
	for(int i=0;i<n;i++)
		if(i%2)
			cout<<0;
		else
			cout<<1;
	return 0;
}