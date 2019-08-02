#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
    scanf("%lld%lld",&n,&k);
    long long t=n/k;
    if(t&1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
