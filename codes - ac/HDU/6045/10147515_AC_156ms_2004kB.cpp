#include<bits/stdc++.h>
using namespace std;
int n,x,y;
string s1,s2;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&x,&y);
        cin>>s1>>s2;
        int len=s1.length();
        int cnt = 0;
        for(int i=0;i<len;i++)
            if(s1[i]==s2[i])
                cnt++;
        if(x+y<=n+cnt&&abs(x-y)<=(n-cnt))
            printf("Not lying\n");
        else
            printf("Lying\n");
    }
    return 0;
}
