#include<bits/stdc++.h>
using namespace std;
vector<char>a;
char s[100010];
int main()
{
    while(~scanf("%s",s))
    {
        int len=strlen(s);
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(i+1<len&&s[i]==s[i+1])
            {
                printf("%d %d\n",i+1,i+2);
                flag=1;
                break;
            }
            else if(i+2<len&&s[i]==s[i+2])
            {
                printf("%d %d\n",i+1,i+3);
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("-1 -1\n");
    }
    return 0;
}
