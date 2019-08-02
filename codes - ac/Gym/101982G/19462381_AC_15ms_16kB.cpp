#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
const int maxn = 1e5 + 7;
inline int absx(int a){
    if(a>=0)return a;
    else return -a;
}
long double dist(long double x1,long double y1,long double x2,long double y2){
    return sqrtl((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x,y,x1,y1,x2,y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    int MY = max(y1,y2),my = min(y1,y2);
    int MX = max(x1,x2),mx = min(x1,x2);
    long double d;
    if(x<=MX&&x>=mx){
        d = (long double)min(absx(y-MY),absx(y-my));
    }
    else if(y<=MY&&y>=my){
        d = (long double)min(absx(x-MX),absx(x-mx));
    }
    else{
        d = min(dist(x1,y1,x,y),min(dist(x1,y2,x,y),min(dist(x2,y1,x,y),dist(x2,y2,x,y))));
    }
    printf("%.3Lf\n",d);
    return 0;
}