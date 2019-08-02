#include<bits/stdc++.h>
using namespace std;
const string c="0";
int main()
{
	string s;
	while(cin>>s){
                if(s==c) break;
		int len=s.length();
		int sum=0;
		for(int i=0;i<len;i++)
			sum+=(s[i]-'0');
		cout<<(sum-1)%9+1<<endl;
	}
        return 0;
}