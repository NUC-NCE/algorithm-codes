#include<bits/stdc++.h>
using namespace std;
int wss;
struct Data{
    int v;
    int ans;
    int x;
    bool operator<(const struct Data&pt)const{
        if(wss==0)
            return x<pt.x;
        else
            return v<pt.v;
    }
};
int value[1100000];
int check(int x){
    int a[6];
    for(int i=0;i<6;i++){
        a[i] = x%10;
        x/=10;
    }
    int ans = (a[5]+a[4]+a[3]) - (a[2]+a[1]+a[0]);
    if(ans<0) ans*=-1;
    return ans;
}
int aa[1100];
vector<Data> a;
int getans(int p){
    int v=p;
    int ans = 0;
    for(int i=0;i<v;++i)
        ans += aa[i];
    return ans;
}
void init(){
    Data pt;
    int pi = -1;
    for(int i=0;i<a.size();i++){
        int p = a[i].x;
        while(pi<p){
            pi+=1;
            aa[check(pi)] += 1;
        }
        int vp = check(p);
        a[i].ans = getans(vp);
    }
    wss = 1;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i].ans<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Data pt;
        cin>>pt.x;
        pt.v = i;
        a.push_back(pt);
    }
    wss = 0;
    sort(a.begin(),a.end());
    init();
    return 0;
}
