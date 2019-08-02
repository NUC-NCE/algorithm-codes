#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1.0);
const double eps=1e-12;
int t;
double r,R,x1,x2,s1,s2,s3,s4,y1,y2;
double distances(double a,double b,double c,double d)
{
    return sqrt((b-a)*(b-a)+(c-d)*(c-d));
}
double area(double r1,double r2)
{
    double d=distances(x1,x2,y1,y2);
    if(r1+r2<=d)
        return 0;
    if(d<=fabs(r1-r2))
        return min(r1*r1,r2*r2)*pi;
    double hf=(r1+r2+d)/2;
    double ss=2*sqrt(hf*(hf-r1)*(hf-r2)*(hf-d));
    double a1=acos((r1*r1+d*d-r2*r2)/(2*r1*d));
    a1=a1*r1*r1;
    double a2=acos((r2*r2+d*d-r1*r1)/(2*r2*d));
    a2=a2*r2*r2;
    return a1+a2-ss;
}
int main()
{
    scanf("%d",&t);
    int k=1;
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&r,&R,&x1,&y1,&x2,&y2);
        s1=area(r,r);
        s2=area(R,R);
        s3=area(r,R);
        s4=area(R,r);
        printf("Case #%d: %.6f\n",k++,s1+s2-s3-s4+eps);
    }
    return 0;
}