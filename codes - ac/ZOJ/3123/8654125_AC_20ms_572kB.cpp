#include<cstdio>
#include<algorithm>
int a[100005];
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
	while(t--)
	{
	    int n,s;
        int i,j;
        int sum,start,end,ans;
	    scanf("%d %d",&n,&s);
		ans=n;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sum=0;
		start=0;
		end=0;
		while(end<n)
		{
			while(end<n&&sum<s)
				sum=sum+a[end++];
			while(sum>=s && start<end)
			{
				sum=sum-a[start++];
				ans=min(ans,end-start+1);
			}
		}
		if(ans==n)
			printf("0\n");
		else
            printf("%d\n",ans);
	}
	return 0;
}
