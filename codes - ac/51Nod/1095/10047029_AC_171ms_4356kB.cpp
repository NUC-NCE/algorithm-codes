#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>
#include<string>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    map<string,int>mp_1,mp_2;
    for (int i=0;i<n;i++)
    {
        char s[11];
        scanf("%s",s);
        int len=(int)strlen(s);
        mp_1[s]++;
        sort(s, s + len);
        mp_2[s]++;
    }
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        char s[11];
        scanf("%s",s);
        int len=(int)strlen(s);
        int num_1=mp_1[s];
        sort(s,s+len);
        int num_2=mp_2[s];
        printf("%d\n",num_2-num_1);
    }
    return 0;
}
