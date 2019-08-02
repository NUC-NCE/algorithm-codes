#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[1000000];
int main()
{
    scanf("%s",str);
    int q=strlen(str);
    int p=q;
    while(p--)
    {
        str[q++]=str[p];
    }
    printf("%s",str);
    return 0;
}
