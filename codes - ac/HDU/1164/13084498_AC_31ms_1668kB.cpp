#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
/*这玩意居然不用素数表。。。白打了
int prime[70000];
int is_prime[70000+1];
void getprime()
{
    int p=0;
    for(int i=0;i<=65535;i++)
        is_prime[i]=1;
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i<=65535;i++)
    {
        if(is_prime[i]){
            prime[p++]=i;
            for(ll j=2*i;j<=65535;j+=i)
                is_prime[j]=0;
        }
    }
}
*/
int main()
{
    int x;
    while(~sd(x)){
        int flag=0;
        for(int i=2;;i++){
            while(x%i==0){
                if(x/i==1){
                    printf("%d\n",i);
                    flag=1;
                    break;
                }
                else
                    printf("%d*",i);
                x/=i;
            }
            if(flag)
                break;
        }
    }
    return 0;
}