#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
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
typedef unsigned long long ll;
using namespace std;
string s;
int main()
{
    while(cin>>s){
        bool flag=false;
        int num=0;
        int len=s.length();
        int ans=0;
        reps(len-1,0,i){
            if(s[i]=='0'){
                num++;
                ans+=num;
                num=1;
                if(!flag)
                    num=0;
            }
            else{
                num++;
                flag=true;
            }
        }
        if(num!=1)
            ans+=(num+1);
        cout<<ans<<endl;
    }
    return 0;
}