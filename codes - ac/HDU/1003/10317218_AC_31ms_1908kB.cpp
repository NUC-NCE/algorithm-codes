#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int n;
int a[100100];
int main()
{
    int t;
    scanf("%d",&t);
    int p=1;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int k=1;
        int s=0,e=0,maxsum=-10000000,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>maxsum)
            {
                maxsum=sum;
                s=k;
                e=i+1;
            }
            if(sum<0)
            {
                sum=0;
                k=i+2;
            }
            /*printf("%d\n",maxsum);*/
        }
        printf("Case %d:\n%d %d %d\n",p,maxsum,s,e);
        p++;
        if(t)
            printf("\n");
    }
    return 0;
}

