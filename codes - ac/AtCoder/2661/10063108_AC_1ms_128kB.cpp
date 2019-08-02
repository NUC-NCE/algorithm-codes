#include<cstdio>
using namespace std;
typedef long long ll;
ll n=50;
int main()
{
    ll k;
    ll i=0;
    scanf("%lld",&k);
    printf("50\n");
    while(n--)
    {
        printf("%lld",49-i+((49-i+k)/50));
        i++;
        if(n)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
