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
const char s[]="marshtomp";
const char t[]="fjxmlhx";
int main(){
    char a[220];
    while(gets(a)){
        for(int i=0;i<strlen(a);i++){
           int j;
           for(j=0;j<strlen(s);j++){
                if(a[i+j]!=s[j]&&tolower(a[i+j])!=s[j]&&toupper(a[i+j])!=s[i]){
                    cout<<a[i];
                    break;
                }
            }
            if(j==strlen(s)){
                cout<<t;
                i+=(j-1);
            }
       }
        cout<<endl;
    }
    return 0;
}
