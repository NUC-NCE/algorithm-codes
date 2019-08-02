#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int a[100005];
int n,c;
int cmp(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}
int z(int m)
{
	int p=0;
	int i;
	for(i=1;i<c;i++)
	{
		int now=p+1;
		while(now<n&&a[now]-a[p]<m)
			now++;
		if(now==n)
			return 0;
		p=now;
	}
	return 1;
}

int main()
{
    int x,l,max,i;
    while(~scanf("%d %d",&n,&c))
    {
        memset(a,sizeof(a),0);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(a[0]),cmp);
        l=0;
        max=1000000000;
        for(i=0;i<100;i++)
        {
            x=(l+max)/2;
            if(z(x))
                l=x;
            else
                max=x;
        }
        printf("%d\n",l);
    }
    return 0;
}