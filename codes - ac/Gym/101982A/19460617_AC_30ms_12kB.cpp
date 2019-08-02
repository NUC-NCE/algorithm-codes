#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int len=a.length();
    int k=0;
    for(int i=0;i<len;i++)
        if(a[i]==b[i])
            k++;
    int ans=0;
    //cout<<n<<" "<<k<<"====="<<len<<endl;
    ans=min(n,k)+min(len-k,len-n);
    cout<<ans<<endl;
    return 0;
}
