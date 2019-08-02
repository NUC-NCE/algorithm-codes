#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int l[1100000],r[1100000];
ll wh[1100000];
ll wa[1100000];
struct Data{
    ll a;
    ll h;
    ll index;
    bool operator<(const Data &pt)const{
        if(h!=pt.h)
            return h<pt.h;
        else
            return index<pt.index;
    }
};
map<Data,int> maps;
int main(){
    ios::sync_with_stdio(false);
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>l[i]>>r[i];
    }
    ll ans = 0,h = 0;
    ll pre = -1;
    int er = 0;
    wh[0] = 0;
    wa[0] = 0;
    for(int i=1;i<=n;i++){
        if(pre==-1){
            pre = l[i];
        }
        h += (l[i]-pre);
        ans += (l[i]-pre);
        wh[i] = h,wa[i] = ans;
        Data pt;pt.a =ans;pt.h = h;
        pt.index = i;
        maps[pt] = 1;
        ans += (r[i]-l[i]);
        pre = r[i];
    }
    map<Data,int>::iterator fp;
    ll aans = 0;
    for(int i=1;i<=n;i++){
        ll ph = wh[i];
        ll ah = ph + m;
        Data pt;
        pt.h = ah;pt.a = wa[i];pt.index = n+1;
        maps[pt] = 1;
        fp = maps.find(pt);--fp;
        Data pd = fp->first;
        maps.erase(pt);
        ll zans = pd.a - pt.a;
        if(pd.h!=ah){
            zans += (r[pd.index] - l[pd.index]);
            zans += (ah-pd.h);
        }
       // cout<<i<<" "<<zans<<" "<<ph<<" "<<ah<<endl;
        if(zans>aans)
            aans = zans;
    }
    cout<<aans<<endl;
    return 0;
}
