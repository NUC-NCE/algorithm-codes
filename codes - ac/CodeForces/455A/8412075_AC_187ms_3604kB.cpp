#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long a[100005],b[100005];
int main()
{
	int n,i,c;
	cin>>n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(n--)
	{
		cin>>c;
		a[c]++;
	}
	b[1]=a[1];
	for(i=2;i<100003;i++)
		b[i]=max(b[i-1],b[i-2]+a[i]*i);
	cout<<b[100002]<<endl;
	return 0;
}