#include<cstdio>
#include<ctype.h>
#include<iostream>
#include<cstring>
using namespace std;
char str[256];
int main()
{
    while(gets(str))
    {
        if(str[0]=='#')
            break;
        int i=0;
        long long sum=0;
        while(str[i]!='\0')
        {
            int t;
            if(isupper(str[i]))
                t=str[i]-64,
                sum+=(i+1)*t;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}