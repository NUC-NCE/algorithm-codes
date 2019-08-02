#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=310000;
int a[maxn];
char s[300];
char p[300];
int main()
{
	int n;
	cin>>n;
	cin>>s;
	int ind = 0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			a[ind++]=i;
	for(int i=1;i<ind;i++){
	    memset(p,-1,sizeof(p));
		for(int j=0;j<a[i];j++)
			p[j] = s[a[i]-j-1];
		for(int j=0;j<a[i];j++)
			s[j] = p[j];
	}
	cout<<s;
	return 0;
}