#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char str[210];
int main()
{
    scanf("%s",str);
    int p=strlen(str);
    int h=1;
    if(p<7)
    {
        printf("NO");
        return 0;
    }
    for(int i=1;i<p;i++)
    {
        if(str[i]==str[i-1])
        {
            h++;
        }
        else
        {
            h=1;
        }
        if(h==7)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
