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
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
#define eps 1e-8
using namespace std;
typedef long long ll;
int main()
{
	int t;
	double rx,ry,r,k[6];
	scanf("%d",&t);
	while(t--){
		scanf("%lf %lf %lf",&rx,&ry,&r);
		double a,b,c,d,d1,d2,cos1,cos2;
		bool flag=false;
		for(int i=0;i<6;i++)
            scanf("%lf",&k[i]);
		for(int i=0;i<6;i+=2){  //x1,y1
			int j=(i+2)%6;  //x2,y2
			a=k[j + 1]-k[i+1];
			b=k[i]-k[j];
			c=k[j]*k[i+1]-k[i]*k[j + 1];
			d=(a*rx+b*ry+c)*(a*rx+b*ry+c)/(a*a + b*b);
			if(d<=r*r){
				d1 = (k[i] - rx) * (k[i] - rx) + (k[i+1] - ry) * (k[i+1] - ry) - r*r ;
				d2 = (k[j] - rx) * (k[j] - rx) + (k[j+1] - ry) * (k[j+1] - ry) - r*r ;
				if(d1*d2 <= 0){
					flag = true;
					break;
				}else if(d1 > 0 && d2 > 0){
					cos1 = (rx - k[i]) * (k[j] - k[i]) + (ry - k[i+1]) * (k[j+1] - k[i+1]) ;
					cos2 = (rx - k[j]) * (k[i] - k[j]) + (ry - k[j+1]) * (k[i+1] - k[j+1]) ;
					if(cos1 >= 0 && cos2 >= 0){
						flag = true;
						break;
					}
				}
			}
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
