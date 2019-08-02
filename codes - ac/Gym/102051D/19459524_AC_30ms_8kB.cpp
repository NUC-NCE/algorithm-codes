#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    double a=(n)/(1.00-(y/100.0)+x*y/10000.00);
    double b=a-a*x/100.0;
    double c=b-b*y/100.0;
    printf("%.4f %.4f %.4f %.4f %.4f\n",n,a,b,c,c);
    return 0;
}
