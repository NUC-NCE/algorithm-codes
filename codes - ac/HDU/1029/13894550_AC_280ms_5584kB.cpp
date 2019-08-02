#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
const int maxn=1e6;
int a[maxn];

int n;
int main(){
    while(scanf("%d",&n)!=EOF){
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=0;i<maxn;i++){
            if(a[i]>=(n+1)/2){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
/*const int maxn=2e4+100;
ll a[maxn];
ll s,p;
int n;
int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cin>>p>>s;
        sort(a+1,a+1+n);
        //for(int i=1;i<=n;i++)
        //    cout<<a[i]<<" ";
       // cout<<endl;
        ll d=s/p;
        //cout<<d<<endl;
        int t;
        for(int i=n;i>=1;i--){
            while(a[i]>a[i-1]){
                t=i;
                if(d<=0)
                    break;
                a[i]=a[i]-(a[i]-a[i-1]);
                d-=(n-i+1)*(a[i]-(a[i]-a[i-1]));
            }
            //cout<<a[i]<<" "<<i<<" "<<d<<endl;
            if(d<=0)
                break;
        }
        sort(a+1,a+1+t);
        //for(int i=1;i<=n;i++)
         //   cout<<a[i]<<" ";
        //cout<<endl;
        if(d<0)
            a[n]++;
        cout<<a[n]<<endl;
    }
    return 0;
}
*/