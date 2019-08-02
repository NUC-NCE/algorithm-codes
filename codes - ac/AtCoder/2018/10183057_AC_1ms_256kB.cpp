#include<bits/stdc++.h>
using namespace std;
vector<char>a;
char s[11];
int main()
{
    while(~scanf("%s",s))
    {
        int j=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='0'||s[i]=='1')
                a.push_back(s[i]);
            else
            {
                if(a.size()==0)
                    continue;
                a.pop_back();
            }
        }
        for(int i=0;i<a.size();i++)
            printf("%c",a[i]);
        printf("\n");
    }
}
