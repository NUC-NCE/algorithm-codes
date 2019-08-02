#include<cstdio>
#include<string.h>
#include<ctype.h>
using namespace std;
#include<set>
char a[105];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		set<int>all;
		getchar();
		for(int i=0;i<n;i++)
		{
			scanf("%c",&a[i]);
			a[i]=tolower(a[i]);
			all.insert(a[i]);
		}
		int k=all.size();
		if(k>=26)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}