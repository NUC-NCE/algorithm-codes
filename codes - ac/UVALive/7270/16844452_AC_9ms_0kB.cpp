#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        for(int i=0;i<n;i++){
            /*getchar();
            char s[10];
            scanf("%[^\n]",s);
            int len=strlen(s);*/
            char s[10];
            scanf("%s",s);
            if(s[0]=='S')
                ans++;
            else{
                int x;
                scanf("%d",&x);
                if(x==1)
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
