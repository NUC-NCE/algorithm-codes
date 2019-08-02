#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,b;
int a[110];
int main(int argc, char const *argv[])
{
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
		cin>>a[i],a[i]*=10,sum+=a[i];
	sort(a+1,a+1+n);
	if(sum/n>=45){
		puts("0");
		return 0;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		sum+=(50-a[i]);
		ans++;
		if(sum/n>=45){
			cout<<ans<<endl;
			return 0;
		}
	}
}