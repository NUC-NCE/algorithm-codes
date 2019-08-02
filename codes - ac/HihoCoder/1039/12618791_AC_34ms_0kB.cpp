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
string deletes(const string & a)
{
    vector<char>b;
    if(a.length()<=1)
       return a;
    string ret;
    for(int i=0;i<a.size()-1;i++)
    {
        bool flag = false;
        while(a[i]==a[i+1])
        {
            i++;
            flag=true;
        }
        if(!flag)
            b.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); ++i)
        ret.push_back(b[i]);
    if(a[a.size()-1]!=a[a.size()-2])
        ret.push_back(a[a.size()-1]);
    return ret;
}
int main()
{
    int t;
    cin>>t;
    string ins[3]={"A","B","C"};
    while(t--)
    {
        string ori;
        cin>>ori;
        ll ans=0;
        for(int i=0;i<=ori.size();i++)
            for(int j=0;j<3;++j)
            {
                ll cnt=0;
                string a=ori;
                a.insert(i,ins[j]);
                while(1)
                {
                    string b=deletes(a);
                    cnt += a.size()-b.size();
                    if(a.size()==b.size()||b==""||a=="")
                        break;
                    a=b;
                }
                ans=max(cnt,ans);
            }
        cout<<ans<<endl;
    }
}



