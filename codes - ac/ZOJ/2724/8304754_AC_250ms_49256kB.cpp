#include<iostream>
#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

struct node
{
    char m[1005];
    int num;
    int c;
    int p; 
    bool operator<(const node a)const
    {
        if(p==a.p)
            return num>a.num;
        return p>a.p;
    }
}temp;

priority_queue< node >q1;

int main()
{
    char ch[3];
    int n=0;
    while(~scanf("%s",ch))
    {
        if(strcmp(ch,"GET")==0)
        {
            if(q1.empty())
                 printf("EMPTY QUEUE!\n");
            else
            {
                printf("%s %d\n",q1.top().m,q1.top().c);
                q1.pop();
            }
        }
        else if(strcmp(ch,"PUT")==0)
        {
            n++;
            temp.num=n;
            scanf("%s%d%d",temp.m,&temp.c,&temp.p);
            q1.push(temp);
        }
    }
    return 0;
}