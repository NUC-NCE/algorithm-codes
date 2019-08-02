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
struct info
{
    string name;
    string place;
    int weight;
};
bool cmp(info a,info b)
{
    if(a.place!=b.place)
        return a.place<b.place;
    if(a.place==b.place)
        return a.name<b.name;
}
int main()
{
    info m[200];
    int n;
    sd(n);
    while(n--)
    {
        int x;
        sd(x);
        rep(0,x-1,i)
            cin>>m[i].name>>m[i].place>>m[i].weight;
        sort(m,m+x,cmp);
        reps(x-1,1,i){
            if(m[i].name==m[i-1].name&&m[i].place==m[i-1].place)
                m[i-1].weight+=m[i].weight;
        }
        cout<<m[0].place<<endl;
        cout<<"   |----"<<m[0].name<<"("<<m[0].weight<<")"<<endl;
        rep(1,x-1,i){
            if(m[i].place==m[i-1].place&&m[i].name!=m[i-1].name)
                cout<<"   |----"<<m[i].name<<"("<<m[i].weight<<")"<<endl;
            else if(m[i].place!=m[i-1].place){
                cout<<m[i].place<<endl;
                cout<<"   |----"<<m[i].name<<"("<<m[i].weight<<")"<<endl;
            }
        }
        if(n)
            cout<<endl;
    }
    return 0;
}
