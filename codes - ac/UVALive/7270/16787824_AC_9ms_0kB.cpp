#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main()
{
    while(scanf("%d",&n)!=EOF){
        getchar();
        int ans=0;
        while(n--){
            char c;
            scanf("%c",&c);
            if(c=='S'){
                getchar();
                 ans++;
            }
            else{
                int x;
                scanf("%d",&x);
                getchar();
                if(x==1)
                    ans++;
                
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
