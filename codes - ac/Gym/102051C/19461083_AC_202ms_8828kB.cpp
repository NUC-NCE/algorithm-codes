#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
const int maxn = 5e5 + 7;
int fa[maxn];
int na[maxn];
inline int find(int x){
    if(fa[x] == x){
        return x;
    }
    else return fa[x] = find(fa[x]);
}
inline void merge(int x, int y){
    int a = find(x);
    int b = find(y);
    if(a!=b){
        fa[a] = b;
    }
}
int cnt = 0;
inline int add(const string a){
    auto p = mp.find(a);
    if(p==mp.end()) {
        mp.insert(make_pair(a,cnt));
        return cnt++;
    }
    return (*p).second;
}
inline bool cmp(const int& a,const int& b){
    return a>b;
}
const int epr = 'a' - 'A';
inline string toLowerCase(string p){
    for(int i=0;i<p.length();++i){
        if(p[i]>='A'&&p[i]<='Z'){
            p[i] += epr;
        }
    }
    return p;
}
int main(){
    int n,m,k;
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for(int i=0;i<n;++i){
        fa[i] = i;
    }
    for(int i=0;i<m;++i){
        string a,b;
        cin >> a >> b;
        int x = add(toLowerCase(a));
        //cout << x << endl;
        int y = add(toLowerCase(b));
        //cout << y << endl;
        merge(x, y);
    }
    for(int i=0;i<n;++i){
        int x = find(i);
        ++na[x];
    }
    sort(na,na+n,cmp);
    int ans = 0;
    for(int i=0;i<k;++i){
        ans += na[i];
    }
    cout << ans << endl;
    return 0;
}
