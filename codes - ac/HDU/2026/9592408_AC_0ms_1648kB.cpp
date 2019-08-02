#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
char str[105];
int n;
int main()
{
    while(gets(str))
    {
        int p=strlen(str);
        printf("%c",str[0]-32);
        for(int i=1;i<p;i++)
        {
            if(str[i-1]==' ')
                printf("%c",str[i]-32);
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
