#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
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
int num[200];
int main()
{
   int n,a,b;
   while(cin>>n>>a>>b){
        num[1]=1;
        rep(2,n,i){
            if(b){
                num[i]=1*pow(2,i-1);
                b--;
            }
            else if(a&&i>2){
                num[i]=num[i-1]+1;
                a--;
            }
            else
                num[i]=num[i-1];
        }
        if(a||b)
            cout<<"-1"<<endl;
        else{
            rep(1,n,i)
            {
                cout<<num[i];
                if(i==n)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }
   }
   return 0;
}