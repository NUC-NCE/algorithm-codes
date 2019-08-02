#include<bits/stdc++.h>
using namespace std;
int n,k;
double v1,v2,ll;
int main()
{
    while(~scanf("%d %lf %lf %lf %d",&n,&ll,&v1,&v2,&k))
    {
        double x2;
        int cnt=n/k;
        if(n%k!=0) 
            cnt=n/k+1;
        x2=ll*(v1+v2)/(--cnt*2*v1+v1+v2);
        printf("%.10lf\n",(ll-x2)/v1+x2/v2);
    }
    return 0;
}
