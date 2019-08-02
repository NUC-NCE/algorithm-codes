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
ll gcd(ll a,ll b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    ll a,b;
    while(~(slld(a),slld(b))){
        plld(a*b/gcd(a,b));
    }
    return 0;
}







/*
int cmp(const void *a,const void *b )
{
    return *(long int *)a-*(long int *)b;
}
int main()
{
	char num[1001],*p;
	long long a[1001];
	int n,i,q;
	while(scanf("%s",num)!=EOF)
	{
		n=0;
		p=num;
		while(*p)
		{
			q=0;
			if(*p=='5')
			{
				p++;
				continue;
			}
			while(*p!='5')
			{
				if(!*p)
				{
					p--;
					break;
				}
				q*=10;
				q+=*p-'0';
				p++;
			}
			a[n++]=q;
			p++;
	    }
		qsort( a,n,sizeof(long long),cmp );
        for(i=0;i<n;++i)
        {
			printf("%ld",a[i]);
			if(i!=n-1)
                printf(" ");
        }
        printf("\n");
    }
}
*/
