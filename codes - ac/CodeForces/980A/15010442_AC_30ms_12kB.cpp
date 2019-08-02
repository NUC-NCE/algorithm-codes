#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0;int b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-')
            a++;
        else if(s[i]=='o')
            b++;
    }
    if(b==0||a==0||a%b==0)
        puts("YES");
    else
        puts("NO");
    return 0;
}