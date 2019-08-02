#include<bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);
typedef long long ll;
int main()
{
    int t;
    int cas=1;
    scanf("%d",&t);
    while(t--){
        double a,b;
        scanf("%lf %lf",&a,&b);
        double v=a/b;
        double r=pow(3.0*v/(4*pi),1.0000/3);
        double ans=4*pi*r*r;
        printf("Case %d: %.4f\n",cas++,ans);
    }
    return 0;
}
