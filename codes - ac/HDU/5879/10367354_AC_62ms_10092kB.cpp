#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi=3.141592653;
char n[1000100];
double a[1000010];
int main()
{
    memset(a,0,sizeof(a));
    for(ll i=1;i<1000000;i++)
        a[i]=a[i-1]+1.0/(i*i);
    double maxn=pi*pi/6.0;
    double q=0.0;
    while(~scanf("%s",n))
    {
        ll p=strlen(n);
        if(p>=7)
            q=maxn;
        else
        {
            ll w=0;
            for(ll i=0;i<p;i++)
            {
                w=10*w+n[i]-'0';
            }
            q=a[w];
        }
        printf("%.5f\n",q);
    }
    return 0;
}
