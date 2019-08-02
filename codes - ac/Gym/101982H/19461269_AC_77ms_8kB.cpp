#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int x){
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int ans=0;
void dfs(int a){
    if(a<4)
        return ;
    ans++;
    int i;
    for(i=2;i<=a/2;i++){
        if(i+i==a) continue;
        if(check(i)&&check(a-i))
            break;
    }
    dfs(abs(i*2-a));
}
int main()
{
    int n;
    scanf("%d",&n);
    dfs(n);
    cout<<ans<<endl;
    return 0;
}
