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
typedef long long ll;
using namespace std;
const int maxn=20;
double a[maxn];
double Area(double x,double y,double z){
    double p=(x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
}
int main()
{
    int n;
    while(cin>>n&&n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        double area=0.00;
        double x,y,z;
        /*for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;*/
        for(int i=n-1;i>=0;i--){
                x=a[i];
                y=a[i-1];
                z=a[i-2];
                if(x+y>z && x+z>y && y+z>x){
                    area=area+Area(x,y,z);
                    //cout<<x<<"--"<<y<<"--"<<z<<endl;
                    i=i-2;
                }
        }
        printf("%.2f\n",area);
    }
}