#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7+100;
int mp[maxn];
ll n,p;
int main() {
    ios::sync_with_stdio(false);
    cin >> p >> n;
    int pos=0;
    mp[0]=1;
    int ans=1;
    for(int i=1;i<=min(2*p,n);i++){
    	pos=(pos + i)%p;
    	//cout<<i<<" "<<ret<<endl;
    	if(!mp[pos]){
            mp[pos]=1;
            ans++;
    	}
    	if(ans==p)
            break;
	}
    cout << ans << endl;
    return 0;
}
