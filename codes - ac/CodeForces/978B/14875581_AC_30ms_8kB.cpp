#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int num=0;
    for(int i=0;i<n-2;i++)
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
            num++;
    cout<<num<<endl;
    return 0;
}
