#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5+100;
int a[maxn];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int num=1;
    int ans=0;
    for(int i=2;i<=n;i++){
        if(a[i]==a[i-1]){
            num++;
        }
        else{

            ans+=num/2;
            num=1;
        }
    }
    ans+=num/2;
    cout<<ans/2<<endl;
    return 0;
}
