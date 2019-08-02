#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
long long a,b,res;
int main()
{
    res=0;
    scanf("%lld%lld",&a,&b);
    while(1)
    {
        if(a>b)
        {
            res+=a/b;
            a=a%b;
        }
        else
        {
            res+=b/a;
            b=b%a;
        }
        if(a<=0||b<=0)
            break;
    }
    printf("%lld\n",res);
    return 0;
}
