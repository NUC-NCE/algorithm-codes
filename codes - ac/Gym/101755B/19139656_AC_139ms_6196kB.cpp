#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Data{
    ll x,y;
    bool operator<(const struct Data&pt)const{
        return x+y<pt.x+pt.y;
    }
    void read(){
        scanf("%lld%lld",&x,&y);
    }
};
vector<Data> a;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        Data pt;pt.read();
        a.push_back(pt);
    }
    a.push_back(a[0]);
    a.push_back(a[1]);
    ll ans = -1;
    int ok = 0;
    for(int i=2;i<a.size();i++){
        Data v1,v2;
        v1.x = a[i].x - a[i-2].x;v1.y = a[i].y - a[i-2].y;
        v2.x = a[i-1].x - a[i-2].x;v2.y = a[i-1].y - a[i-2].y;
       // v1.out();
       // v2.out();
        //cout<<"*"<<endl;
        ll zans = abs(v1.x * v2.y - v1.y*v2.x);
        //cout<<"z:"<<zans<<endl;
        if(ok==0||zans<ans){
            ok = 1;
            ans = zans;
        }
    }
    printf("%lld",ans);
    return 0;
}
/*
4
0 1
3 0
3 3
-1 3
*/
/*
4
-999999991 999999992
-999999993 -999999994
999999995 -999999996
999999997 999999998
0 0
1 0
0 1
*/
/*
4
-999999991 999999992
-999999993 -999999994
999999995 -999999996
999999997 999999998

*/
