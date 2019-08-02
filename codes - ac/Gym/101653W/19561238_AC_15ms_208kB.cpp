#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 80;
int n;

string name[maxn];
double x[maxn],y[maxn],z[maxn];
double d[maxn][maxn];
bool vis[maxn];
double dis(int i,int j){
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
}
int main()
{
    int t;
    cin>>t;
    int cas=1;
    while(t--){
        unordered_map<string,int>mp;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>name[i]>>x[i]>>y[i]>>z[i];
            mp[name[i]]=i;
        }
        int p;
        cin>>p;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]=dis(i,j);
        for(int i=1;i<=p;i++){
            string x,y;
            cin>>x>>y;
            d[mp[x]][mp[y]]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
                }
            }
        }
        int q;
        cout<<"Case "<<cas<<":\n";
        cin>>q;
        while(q--){
            string x,y;
            cin>>x>>y;
            int ans=round(d[mp[x]][mp[y]]);
            cout<<"The distance from "<<x<<" to "<<y<<" is "<<ans<<" parsecs."<<endl;
        }
        cas++;
    }
    return 0;
}
