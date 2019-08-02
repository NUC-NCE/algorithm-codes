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
#define plf(d) printf("%.6lf\n",d)
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
struct info
{
    char str[1010];
    int val;
    int p1;
    int p2;
};
info num[220];
bool cmp(info a,info b)
{
    if(a.val != b.val)
        return a.val>b.val;
    else
        return strcmp(a.str,b.str)<0;
}
int N;
int main()
{
    int M;
    char ss[1010];
    while(~(sd(N))&&N)
    {
        rep(1,N,i){
            scanf("%s%d",num[i].str,&num[i].val);
            num[i].p2 = 1;
        }
        sort(num+1,num+N+1,cmp);
        num[1].p1 = num[1].p2 = 1;
        printf("%s %d\n",num[1].str,num[1].val);
        rep(2,N,i){
            printf("%s %d\n",num[i].str,num[i].val);
            int flag=0;;
            reps(i-1,1,j){
                if(num[i].val==num[j].val){
                    flag=1;
                    num[i].p2++;
                }
                else
                    break;
            }
            if(flag)
                num[i].p1=num[i-1].p1;
            else
                num[i].p1=num[i-1].p1+num[i-1].p2;
        }
        sd(M);
        while(M--){
            ss(ss);
            rep(1,N,i){
                if(strcmp(num[i].str, ss)==0){
                    printf("%d", num[i].p1);
                    if(num[i].p2!=1)
                        printf(" %d",num[i].p2);
                    break;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
