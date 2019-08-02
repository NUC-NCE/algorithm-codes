#include<bits/stdc++.h>
using namespace std;
long long a,n,m;
int main()
{
scanf("%lld%lld",&n,&m);
a=0;
while(n<m)
{
if(m%2==1)
 m++;
else
 m=m/2;
a++;
}
printf("%lld\n",a+n-m);
}