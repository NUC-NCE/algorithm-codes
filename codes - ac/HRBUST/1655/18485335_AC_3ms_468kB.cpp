#include <bits/stdc++.h>
using namespace std;

int main(){
    double h;
    while(scanf("%lf",&h)!=EOF){
        double ans=4.0*3.1415926*(h/2.0)*(h/2.0)*(h/2.0)/3.0;
        printf("%.2lf\n",ans);
    }
    return 0;
}