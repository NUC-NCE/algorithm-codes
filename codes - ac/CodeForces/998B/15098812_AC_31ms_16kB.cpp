#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,b;
int a[110];
int main(int argc, char const *argv[]){
	cin>>n>>b;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	map<int,int>mp;
	vector<int> v;
	for(int i=1;i<n;i++){
		if(a[i]%2)
			mp[1]++;
		else
			mp[2]++;
		if(mp[1]==mp[2])
			v.push_back(abs(a[i+1]-a[i]));
	}
	sort(v.begin(), v.end());
	vector<int>::iterator it;
	int ans=0;
	for(it=v.begin();it!=v.end();it++){
		if(*it<=b){
			ans++;
			b-=*it;
		}
	}
	cout<<ans<<endl;
	return 0;
}