#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll n;
ll sum;
int main()
{
    int t;
    scanf("%d",&t);
    int res=1;
    while(t--)
    {
        scanf("%lld",&n);
        sum=n*(n+1)/2-1;
        printf("Case #%d: %lld\n",res,sum);
        res++;
    }
    return 0;
}
