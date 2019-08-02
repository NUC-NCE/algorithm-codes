#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll p,a,x;
    int flag=0;
    scanf("%lld %lld",&p,&a);
    for(ll i=0;i<=p;i++)
    {
        if((i*i)%p==a)
        {
            flag=1;
            printf("%lld ",i);
        }
    }
    if(!flag)
        printf("No Solution\n");
    return 0;
}