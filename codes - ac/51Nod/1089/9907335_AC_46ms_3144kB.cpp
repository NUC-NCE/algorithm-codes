#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int manacher(string&str)
{
    int p[200010];
    memset(p,0,sizeof(p));
    int mx=0,id=0;
    for(int i=0;i<=str.size();i++)
    {
        if(mx>i)
            p[i]=(p[2*id-i]<(mx-i)?p[2*id-i]:(mx-i));
        else
            p[i]=1;
        while(str[i-p[i]]==str[i+p[i]])
            p[i]++;
        if(i+p[i]>mx)
        {
            mx=i+p[i];
            id=i;
        }
    }
    int maxn=0,ii;
    for(int i=0;i<str.size();i++)
    {
        if(p[i]>maxn)
        {
            ii=i;
            maxn=p[i];
        }
    }
    maxn--;
    int start=ii-maxn ;
    int endd=ii+maxn;

   return maxn;
}

int main()
{
    string str;
    cin>>str;
    string str0;
    str0+="$#";
    for(int i=0;i<str.size();i++)
    {
        str0+=str[i];
        str0+="#";
    }
    printf("%d\n",manacher(str0));
    return 0;
}
