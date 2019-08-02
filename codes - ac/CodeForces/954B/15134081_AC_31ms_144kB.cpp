#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	for(int i=1;i<=(n+1)>>1;i++)
		if(s.substr(0,i)==s.substr(i,i))
			res=i;
	if(res)
		cout<<n-res+1<<endl;
	else
		cout<<n<<endl;
	return 0;
}