#include<bits/stdc++.h>
using namespace std;
long long n,m,d;
typedef long long ll;
struct node{
    int t;
    int pos;
    node(){}
    node(int a,int b):t(a),pos(b){}
    bool operator < (const node &x)const {
        if(t!=x.t)
        return t<x.t;
        return pos>x.pos;
    }
};
int wss;
map<node,int> maps;
struct Data{
    int x;
    int v;
    int ans;
    bool operator<(const Data&pt)const{
        if(wss==0)
            return x<pt.x;
        return v<pt.v;
    }
};
vector<Data> a;
map<int,int> mint;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>d;
    for(int i=1;i<=n;i++){
        node pt;
        pt.pos = i;
        pt.t = -1000000;
        maps[pt] = 1;
    }
    wss = 0;
    for(int i=1;i<=n;i++){
        Data pt;
        cin>>pt.x;
        pt.v = i;
        a.push_back(pt);
    }
    sort(a.begin(),a.end());
    map<node,int>::iterator pf;
    int ans = 1;
    for(int i=0;i<a.size();i++){
        node pt;
        pt.t = a[i].x;
        pt.pos = -1;
        maps[pt] = 1;
        pf = maps.find(pt);
        --pf;
        node pd = pf->first;
        maps.erase(pd);
        maps.erase(pt);
        a[i].ans = pd.pos;
        if(a[i].ans>ans)
            ans=a[i].ans;
        pd.t = a[i].x + d + 1;
        maps[pd] = 1;
    }
    wss = 1;
    sort(a.begin(),a.end());
    cout<<ans<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i].ans<<" ";
    return 0;
}
