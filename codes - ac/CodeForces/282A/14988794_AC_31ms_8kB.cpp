#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=300;
int a[maxn];
int main()
{
    int num=0;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if((s[0]=='+'&&s[1]=='+')||(s[1]=='+'&&s[2]=='+'))
            num++;
        else if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-'))
            num--;
    }
    cout<<num;
    string s;
}

