#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 9973

int a[500001],ans[500001]={0},n,t;
multiset<int> s;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int p=1;
    for(int i=1;i<=n;i++){
        while(1){
            if(p>n) break;
            if(a[p]>0){
                if(s.find(a[p])==s.end()) p++;
                else  break;
            } else {
                s.insert(-a[p]);
                p++;
            }
        }
        if(a[i]<0) s.erase(s.find(-a[i]));
        ans[i]=p-i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
}
