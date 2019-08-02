#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp ( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
int a[10001];
int b[10001];
int m=1;
int k,y;
int main()
{
	int n,p,i,j,s;
	while(~scanf("%d %d",&n,&p))
	{
		k=0;s=0;
		memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
		if(n==0) break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		qsort(a, n, sizeof(int),cmp);
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[j]);
	    }
	    printf("CASE# %d:\n",m++);
		for(k=0;k<p;k++)
		{
			y=1;
			for(s=0;s<n;s++)
			{
				if(b[k] == a[s]) 
				{
					printf("%d found at %d\n", b[k], s+1);
					y=0;
					break;
				}
			}
			if(y)
			{
                printf("%d not found\n", b[k]);
            }
		}
	 }
	 return 0;
}