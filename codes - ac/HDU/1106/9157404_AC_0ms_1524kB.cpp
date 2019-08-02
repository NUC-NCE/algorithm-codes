#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int cmp(const void *a,const void *b )
{
    return *(long int *)a-*(long int *)b;
}
int main()
{
	char num[1001],*p;
	long long a[1001];
	int n,i,q;
	while(scanf("%s",num)!=EOF)
	{
		n=0;
		p=num;
		while(*p)
		{
			q=0;
			if(*p=='5')
			{
				p++;
				continue;
			}
			while(*p!='5')
			{
				if(!*p)
				{
					p--;
					break;
				}
				q*=10;
				q+=*p-'0';
				p++;
			}
			a[n++]=q;
			p++;
	    }
		qsort( a,n,sizeof(long long),cmp );
        for(i=0;i<n;++i)
        {
			printf("%ld",a[i]);
			if(i!=n-1) printf(" ");
        }
        printf("\n");
    }
}