#include<cstdio>
#include<cstring>
using namespace std;
char s[1000005];
char t[1000005];
int next1[1000005];
void get_next1(char *t)
{
    int i=0,j=-1;
    next1[0]=-1;
    int lt=strlen(t);
    while(i<lt)
    {
        if(j==-1||t[i]==t[j])
        {
            ++i;++j;
            next1[i]=j;
        }
        else
            j=next1[j];
    }
}
int KMP(char *s,char *t)
{
    int lens=strlen(s);
    int lent=strlen(t);
    int i=0,j=0;
    get_next1(t);
    while(i<lens&&j<lent)
    {
        if(j==-1||s[i]==t[j])
        {
            ++i;++j;
        }
        else
            j=next1[j];
    }
    if(j<=lent)
        return j;
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s",s,t);
        int lena=KMP(s,t);
        int lenb=KMP(t,s);
        int LT=strlen(t);
        int LS=strlen(s);
        if(lena>lenb)
            printf("%d\n",LT+LS-lena);
        else
            printf("%d\n",LT+LS-lenb);
    }
    return 0;
}