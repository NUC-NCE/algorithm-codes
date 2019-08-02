#include<bits/stdc++.h>
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
using namespace std;
#define maxn 50050
int max(int x,int y)
{
	return x>y?x:y;
}
struct node
{
	int l,r;
	int lm,rm,rtm;//左子树最大，右子树最大 ,区间最大 
}a[maxn<<2];
int n,m;
void build(int l,int r,int rt)
{
	a[rt].l=l;
	a[rt].r=r;
	a[rt].lm=a[rt].rm=a[rt].rtm=r-l+1;
	if(l!=r)
	{
		int mid=(l+r)>>1;
		build(lson);
		build(rson);
	}
 } 
void update(int rt,int pos,int flag)
{
    if(a[rt].l==a[rt].r)
    {
        if(flag)
            a[rt].lm = a[rt].rm = a[rt].rtm = 1;
        else
            a[rt].lm= a[rt].rm= a[rt].rtm=0;
        return ;
    }
    int mid=(a[rt].l+a[rt].r)>>1;
    if(pos<=mid)
        update(rt<<1,pos,flag);
    else
        update(rt<<1|1,pos,flag);
    a[rt].lm= a[rt<<1].lm;
    a[rt].rm = a[rt<<1|1].rm;
    a[rt].rtm= max(max(a[rt<<1].rtm,a[rt<<1|1].rtm),a[rt<<1].rm+a[rt<<1|1].lm);
    if(a[rt<<1].lm == a[rt<<1].r-a[rt<<1].l+1)
        a[rt].lm+= a[rt<<1|1].lm;
    if(a[rt<<1|1].rm == a[rt<<1|1].r-a[rt<<1|1].l+1)
        a[rt].rm += a[rt<<1].rm;
}
int query(int rt,int pos)
{
	if(a[rt].l==a[rt].r||a[rt].rtm==0||a[rt].rtm==(a[rt].r-a[rt].l+1))
	return a[rt].rtm;
	int mid=(a[rt].l+a[rt].r)>>1;
	if(pos<=mid)
	{
		if(pos>=a[rt<<1].r-a[rt<<1].rm+1)
		return query(rt<<1,pos)+query(rt<<1|1,mid+1);
		else
		return query(rt<<1,pos);
	}
	else
	{
		if(pos<=(a[rt<<1|1].l+a[rt<<1|1].lm-1))
		return query(rt<<1,mid)+query(rt<<1|1,pos);
		else
		return query(rt<<1|1,pos);
	}
}
int main()  
{   
    char c[2];
    int top;
    int x;
    int s[100000];
    while(~scanf("%d%d",&n,&m))  
    {  
        top=0;  
        build(1,n,1);  
        while(m--)  
        {  
            scanf("%s",c);  
            if(c[0] =='D')  
            {  
                scanf("%d",&x);  
                s[top++] = x;  
                update(1,x,0);  
            }  
            else if(c[0] == 'Q')  
            {  
                scanf("%d",&x);  
                printf("%d\n",query(1,x));  
            }  
            else  
            {  
                if(x>0)  
                {  
                    x = s[--top];  
                    update(1,x,1);  
                }  
            }  
        }  
    }  
  
    return 0;  
} 