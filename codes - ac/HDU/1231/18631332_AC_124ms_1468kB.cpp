#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =20000;
ll a[maxn];
int main(){
    int n;
    while(scanf("%d",&n)!=EOF&&n){
        for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
        ll sum=0;
        int l=1,r=1;
        int s,t;
        ll maxn=-1;
        int flag=0;
        for(int i=1;i<=n;i++){
            if(a[i]<0) flag++;
            sum=sum+a[i];
            if(sum>=0){
                if(sum>maxn){

                    r=i;
                    maxn=sum;
                    s=l;
                    t=r;
                }
            }
            else if(sum<0){
                sum=0;
                l=i+1;
            }
        }
        if(flag==n){
            s=1;
            t=n;
            maxn=0;
        }
        cout<<maxn<<" "<<a[s]<<" "<<a[t]<<endl;
    }
    return 0;
}
