#include<bits/stdc++.h>
using namespace std;
long long a[3];
int main()
{
    scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
    sort(a,a+3);
    if(a[2]/2>a[0]+a[1])
        printf("%lld\n",a[0]+a[1]);
    else
        printf("%lld\n",(a[0]+a[1]+a[2])/3);
    return 0;
}