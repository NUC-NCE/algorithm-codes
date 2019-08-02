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
int n,m,k;
/*
void getSG()
{

}
*/
int main()
{
    int n,p,q;
    while(cin>>n>>p>>q){
        int x=n%(p+q);
        if(x>0&&x<=p)
            cout<<"LOST"<<endl;
        else
            cout<<"WIN"<<endl;
    }
    return 0;
}