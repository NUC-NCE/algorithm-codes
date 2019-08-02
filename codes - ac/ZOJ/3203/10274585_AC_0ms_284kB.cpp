#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double H,h,d;
        scanf("%lf%lf%lf",&H,&h,&d);
        double res;
        res=H+d;
        double p=sqrt(d*H-d*h);
        double q=d-d/H*h;
        if(p>d)
            p=H-h+d;
        else if(p<=q)
            res=h/H*d,p=0;
        else
            p=2.0*sqrt(d*H-d*h);
        printf("%.3f\n",res-p);
    }
    return 0;
}