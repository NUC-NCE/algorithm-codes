#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		if((a+b)%86==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}