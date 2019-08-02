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
int hh,mm;
int main()
{
    char c;
    scanf("%d:%d",&hh,&mm);
    int q=hh/10+(hh%10)*10;
    if((hh>=06&&hh<10&&hh>00)||(hh==05&&mm>50))
        printf("%d\n",(10-hh)*60+1-mm);
    else if((hh==15&&mm>51)||(hh>15&&hh<20))
        printf("%d\n",(20-hh)*60+2-mm);
    else if(hh<23||(hh==23&&mm<=32)){
        if(q>=mm)
            printf("%d\n",q-mm);
        else{
            hh++;
            q=hh/10+(hh%10)*10;
            printf("%d\n",q+60-mm);
        }
    }
    else
        printf("%d\n",60-mm);
    return 0;
}