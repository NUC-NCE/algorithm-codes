#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<streambuf>
using namespace std;
int a[105];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<n;i++)
	{
		if(a[i]==3&&a[i-1]==1)
			a[i]=2;
		else if(a[i]==3&&a[i-1]==2)
			a[i]=1;
		else if(a[i]==1&&a[i-1]==1)
			a[i]=0;
		else if(a[i]==2&&a[i-1]==2)
			a[i]=0;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
			sum++;
	}
	printf("%d\n",sum);
	return 0;
 }