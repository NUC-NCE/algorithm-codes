#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double n,d;
    while(scanf("%lf%lf",&n,&d)!=EOF){
        int t=1;
        int ans=0;
        while(n>0){
            for(int i=1;i<=t&&n>0;i++){
                if(n>0){
                    n-=d;
                    ans++;
                }
            }
            if(n>0)
                ans++;
            t++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
