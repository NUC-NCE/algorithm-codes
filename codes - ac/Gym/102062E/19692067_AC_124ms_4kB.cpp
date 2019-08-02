#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Data{
    ll x;
    int d;
    int bs;
};
map<ll,bool> maps;
ll p2[62];
ll init(){
    p2[0] = 1;
    for(int i=1;i<=60;i++){
        p2[i] = p2[i-1]*2LL;
    }
}
void deal(int ii){
    int d;
    ll x;
    maps.clear();
    scanf("%d%lld",&d,&x);
    ll dx = 0;
    for(int i=d;i>=0;i--){
        ll c = x - dx;
        if(c==0){
            printf("Case %d: YES %d\n",ii,d-i);
            return;
        }
        else if(c>0){
                dx += p2[i];
                continue;
        }
        else{
            dx -= p2[i];
            continue;
        }
    }
    ll c = x - dx;
    if(c==0){
            printf("Case %d: YES %d\n",ii,d+1);
            return;
    }
    printf("Case %d: NO\n",ii);
}
int main(){
    int t;
    init();
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        deal(i);
    }
    return 0;
}
