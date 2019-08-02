#include<cstdio>
#include<utility>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAX_N = 1005;
int a[MAX_N+1];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        int i=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        if(n==1)
            printf("%d\n",a[0]);
        else if(n==2)
            printf("%d\n",a[1]);
        else if(n==3)
            printf("%d\n",a[0]+a[1]+a[2]);
        else
        {
            int sum=0,p,q;
            while(n>3)
            {
                p=a[0]+a[1]+a[n-1]+a[1];
                q=a[0]+a[n-1]+a[n-2]+a[0];
                sum+=min(p,q);
                n-=2;
            }
            if(n==0)
                printf("%d\n",sum);
            else if(n==1)
                printf("%d\n",sum+a[0]);
            else if(n==2)
                printf("%d\n",sum+a[1]);
            else if(n==3)
                printf("%d\n",sum+a[0]+a[1]+a[2]);
        }
    }
    return 0;
}