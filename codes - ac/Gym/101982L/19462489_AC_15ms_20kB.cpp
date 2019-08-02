#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1100];
int b[1100];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        cin>>a[i]>>b[i];
    int ans=-1;
    for(int i=n;i>=1;i--){
        int sum=0;
        for(int j=1;j<=n;j++)
            if(i>=a[j]&&i<=b[j])
                sum++;
        if(sum==i){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
