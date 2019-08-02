#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    int cas=1;
    scanf("%d",&t);
    while(t--){
        double r;
        scanf("%lf",&r);
        printf("Case %d: %.4f\n",cas++,r*r/4.00);
    }
    return 0;
}
