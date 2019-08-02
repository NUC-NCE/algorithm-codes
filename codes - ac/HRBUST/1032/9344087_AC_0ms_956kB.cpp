#include<cstdio>
using namespace std;
int a[105];
int main()
{
	int n;
	while(~scanf("%d",&n))
    {
        int sum=1;
        for(int i=1;i<=n;i++)
        {
            sum*=i;
        }
        printf("%d\n",sum);
    }
    return 0;
 }
