#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int maxn=1;
        int s,e;
        for(int i=2;i*i<=2*n;i++)
        {
            if((2*n)%i==0)
            {
                int p=2*n/i;
                int q=p-i;
                if(q%2)
                {
                    s=(q+1)/2;
                    e=i+s-1;
                    if(maxn<e-s+1)
                        maxn=e-s+1;
                }
            }
        }
        printf("%d\n",maxn);
    }
    return 0;
}