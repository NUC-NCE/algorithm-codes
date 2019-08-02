#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
#define plf(d) printf("%.6lf\n",d);
#define eps 1e-5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int x=0,y=0;
        int flag=0;
        rep(0,s.length()-1,i){
            if(s[i]=='A'){
                y++;
                x=0;
            }
            else if(s[i]=='L')
                x++;
            else if(s[i]=='O')
                x=0;
            if(x>=3||y>1){
                flag=1;
                break;
            }
        }
        if(flag)
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}