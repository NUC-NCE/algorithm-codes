#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    ll sum=0;
    ll s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&s);
        while(s)
        {
            if(s%256==97)
                sum++;
            s>>=8;
        }
    }
    printf("%lld\n",sum);
    return 0;
}