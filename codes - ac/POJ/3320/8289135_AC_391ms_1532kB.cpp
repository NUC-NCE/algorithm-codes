#include<cstdio>
#include<iostream>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int a[1000005];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
    	set<int>all;
   		map<int,int>q;
   		for(int i=0;i<n;i++)
   		{
        	scanf("%d",&a[i]);
        	all.insert(a[i]);
   		}
        int k=all.size();
        int sum=0,start=0,end=0,ans=n+1;
		for(;;)
        {
            while(end<n&&sum<k)
            {
                if(q[a[end++]]++==0)
                    sum++;
            }
            if(sum<k)
            	break;
            ans=min(ans,end-start);
            if(--q[a[start++]]==0)
                sum--;
        }
        printf("%d\n",ans);
    }
    return 0;
}