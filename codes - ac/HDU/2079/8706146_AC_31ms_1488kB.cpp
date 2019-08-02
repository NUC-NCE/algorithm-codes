#include<cstdio>
#include<utility>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAX_N = 10005;
int a[MAX_N+1],b[MAX_N+1];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int m,n,num[10],v[10],i,j;
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++)
			scanf("%d %d",&v[i],&num[i]);
		memset(a,0,sizeof(a));
        a[0]=1;
        for(i=0;i<m;i++)
        {
            memset(b,0,sizeof(b));
            for(int j=0;j<=num[i]&&j*v[i]<=n;j++)
                for(int k=0;k+j*v[i]<=n;k++)
                    b[k+j*v[i]]+=a[k];
            memcpy(a,b,sizeof(b));
        }
        printf("%d\n",a[n]);;
	}
	return 0;
}