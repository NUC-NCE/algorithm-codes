#include<iostream>
#include<cstdio>
using namespace std;
int a,b;
int main()
{
    scanf("%d %d",&a,&b);
    for(int i=1;;i++)
    {
        if(i%2!=0)
            a-=i;
        if(i%2==0)
            b-=i;
        if(a<0)
        {
            printf("Vladik");
            break;
        }
        if(b<0)
        {
            printf("Valera");
            break;
        }
    }
    return 0;
}
