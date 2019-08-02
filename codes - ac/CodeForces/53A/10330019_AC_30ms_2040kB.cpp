#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ch[105],s;
int main()
{
    int n,ans=0;
    cin>>s;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        if(tmp.find(s)==0)
            ch[ans++]=tmp;
    }
    if(ans==0)
    {
        cout<<s<<endl;
        return 0;
    }
    sort(ch,ch+ans);
    cout<<ch[0]<<endl;
    return 0;
}