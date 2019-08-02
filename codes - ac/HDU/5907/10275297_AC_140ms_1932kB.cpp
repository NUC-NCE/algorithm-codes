#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        ll sum=0,num=0;
        int len=s.length();
        for(int i=0;i<=len;i++)
        {
            if(s[i]=='q')
                num++;
            else
            {
                sum+=num*(num+1)/2;
                num=0;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
