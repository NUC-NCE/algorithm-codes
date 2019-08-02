#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int x[200];
int main()
{

    int n;
    while(scanf("%d",&n)!=EOF&&n){
        int sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&x[i]);
            sum^=x[i];
        }
        if(!sum){
            puts("0");
            continue;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if((sum^x[i])<=x[i])
                ans++;
        }
        printf("%d\n",ans);
    }
}
