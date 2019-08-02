#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s){
		int len=s.length();
		int sum=0;
		for(int i=0;i<len;i++)
			sum+=(s[i]-'0');
		if(sum==0)
			break;
		cout<<(sum-1)%9+1<<endl;
	}
}