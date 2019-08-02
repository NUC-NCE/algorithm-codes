#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int main()
{
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x;
        scanf("%d",&x);
        int minn=x;
        int sum=x;
        for(int i=2;i<=n;i++)
        {
            scanf("%d",&x);
            sum+=x;
            minn=min(minn,x);
        }
        if(sum%2||(minn%2&&n%2==0))
            puts("Yalalov");
        else
            puts("Shin");
    }
    return 0;
}
