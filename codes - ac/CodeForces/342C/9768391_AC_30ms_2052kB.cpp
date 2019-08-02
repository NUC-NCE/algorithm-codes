#include<bits/stdc++.h>
double r,h;
int main()
{
    scanf("%lf%lf",&r,&h);
    int ans=int(h/r)*2;
    h-=int(h/r)*r;
    if(h>=(r+0.0)/2.0)
        ans+=2,h-=r;
    h+=r+(2.0-sqrt(3.0))*r/2.0;
    if(h>=r)
        ans++;
    printf("%d",ans);
    return 0;
}
