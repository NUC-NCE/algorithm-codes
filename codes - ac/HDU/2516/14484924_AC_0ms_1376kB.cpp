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
int fib[45];
int n;
int main()
{
    fib[0]=2;fib[1]=3;
    for(int i=2;i<45;i++)
        fib[i]=fib[i-1]+fib[i-2];
    while(cin>>n&&n){           
        int flag=0;
        for(int i=0;i<45;i++)   
            if(fib[i]==n)     {           
                cout<<"Second win\n";
                flag=1;
                break;
            }  
            if(flag==0)    
                cout<<"First win\n";   
    }   
    return 0;
}
