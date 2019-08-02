#include<stdio.h>
int main()
{
long long n;
while(~scanf("%lld",&n))
{
printf("%lld\n\n",n*(n+1)/2);
}
return 0;
}