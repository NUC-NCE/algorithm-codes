#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,b;
int a[110];
bool checks(ll x){
	ll ret=n;
	ll res=0;
	while(ret){
		if(ret>x){
			res+=x;
			ret-=x;
			ret-=ret/10;
		}
		else{
			res+=ret;
			ret=0;
		}
	}
	if(res>=(n+1)/2)
		return true;
	return false;
}
int main(int argc, char const *argv[])
{
	cin>>n;
	ll l=1,r=n;
	ll mid;
	ll ans=n;
	while(r>=l){
		mid=(l+r)>>1;
		if(checks(mid)){
			r=mid-1;
			ans=min(ans,mid);
		}
		else
			l=mid+1;
	}
	cout<<ans<<endl;
}