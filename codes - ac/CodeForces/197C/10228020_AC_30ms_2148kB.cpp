#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char ch[100050];
int main()
{
    scanf("%s",ch);
    int n=strlen(ch);
    int i=0;
    while(ch[i])
    {
        char p ='0';
        for(int j=i;ch[j];j++)
        {
            if(ch[j]>p)
                p=ch[j];
        }
        for(int j=i;ch[j];j++)
        {
            if(ch[j]==p)
            {
                printf("%c",p);
                i=j+1;
            }
        }
    }
    return 0;
}
