# include<cstdio>
# include<cstdlib>
using namespace std;
int map[5][5];
int dir[4][2]={1,0,-1,0,0,1,0,-1};
struct node
{
    int x,y;
};
struct node queue[50],record[5][5];
void bfs()
{
    int head,tail,i;
    struct node now,next;
    head=tail=0;
    now.x=queue[tail].x;
    now.y=queue[tail].y;
    tail++;
    while(head<tail)
    {
        now=queue[head++];
        for(i=0;i<4;i++)
        {
            next.x=now.x+dir[i][0];
            next.y=now.y+dir[i][1];
            if(next.x>=0&&next.y>=0&&next.x<5&&next.y<5&&map[next.x][next.y]==0)
            {
                    record[next.x][next.y].x=now.x;
                    record[next.x][next.y].y=now.y;
                    if(next.x==4&&next.y==4)
                        return ;
                    else
                    {
                        map[next.x][next.y]=1;
                        queue[tail++]=next;
                    }
            }
        }
    }
}
int main()
{
    int i,j,k,m,n;
    struct node now;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&map[i][j]);
    now.x=0;
    now.y=0;
    map[0][0]=1;
    queue[0]=now;
    bfs();
    k=0;
    queue[k].x=4;
    queue[k++].y=4;
    i=j=4;
    while(i!=0||j!=0)
    {
        m=i;n=j;
        i=record[m][n].x;
        j=record[m][n].y;
        queue[k].x=i;
        queue[k++].y=j;
    }
    for(i=k-1;i>=0;i--)
        printf("(%d, %d)\n",queue[i].x,queue[i].y);
    return 0;
}
