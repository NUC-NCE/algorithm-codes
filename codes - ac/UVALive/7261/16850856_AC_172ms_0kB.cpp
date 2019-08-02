#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
typedef long long ll;
const double eps=1e-7;
const int max_n=2*(1e6)+1000;
ll A[max_n];
ll B[max_n];
ll R;
int main()
{
    int t;
    scanf("%d",&t);
    {
        while(t--)
        {
            int n;
            ll sum=0;
            scanf("%lld",&R);
            scanf("%d",&n);
            for(int i=0;i<=max_n-100;i++)
                A[i]=B[i]=0;
            ll x,y,w,h;
            for(int i=0;i<n;i++)
            {
                scanf("%lld%lld%lld%lld",&x,&y,&w,&h);
                B[x+1]+=h;
                B[x+w+1]-=h;
                sum+=w*h;
            }
            for(int i=1;i<=R;i++)
                B[i]+=B[i-1];
            for(int i=1;i<=R;i++)
                A[i]=A[i-1]+B[i];
            int ret;
            for(int i=R;i>=1;i--)
            {
                if(A[i]*2==sum)
                {
                    ret=i;
                    break;
                }
                else if(A[i]*2>sum&&A[i-1]*2<sum)
                {
                    ret=i;
                    break;
                }
            }
            if(n==1&&w==1)
                ret=R;
            printf("%d\n",ret);
        }
    }
    return 0;
}
