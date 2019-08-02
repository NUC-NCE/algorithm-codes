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
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int num=0;
        int len=a.length();
        for(int i=len-1;;i--){
            if(a[i]=='0')
                num++;
            else
                break;
        }
        int ans=0;
        if(a[0]=='-')
            ans=1;
        if(ans==1)
            cout<<'-';
        for(int i=len-num-1;i>=ans;i--)
            cout<<a[i];
        for(int i=1;i<=num;i++)
            cout<<'0';
        cout<<endl;
    }
    return 0;
}