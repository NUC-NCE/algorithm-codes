#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	long long a[5005] = {0};
	int n,ans = 1,mmm = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
		//for(int i = 1;i<=n;i++)
		//printf("%d ",a[i]);
		for(int i = 2;i<=n;i++)
                 {
		if(a[i] == a[i-1])
		{
			ans++;
			mmm = max(mmm,ans);
		}
		else
			ans = 1;
	}
		mmm = max(mmm,ans);
	printf("%d\n",mmm);
	getchar();
	getchar();
	return 0;
}