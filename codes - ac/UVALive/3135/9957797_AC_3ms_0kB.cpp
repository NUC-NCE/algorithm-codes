#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
struct node
{
    int ID,pe,now;
}t;
bool operator < (node t1,node t2)
{
    return t1.now>t2.now ||(t1.now==t2.now&&t1.ID>t2.ID);
}
int main()
{
    char s[105];
    int k;
    priority_queue<node> q;
    while(~scanf("%s",s)&&s[0]!='#')
    {
        scanf("%d%d",&t.ID,&t.pe);
        t.now=t.pe;
        q.push(t);
    }
    scanf("%d",&k);
    while(k--)
    {
        t=q.top();
        q.pop();
        printf("%d\n",t.ID);
        t.now+=t.pe;
        q.push(t);
    }
    return 0;
}