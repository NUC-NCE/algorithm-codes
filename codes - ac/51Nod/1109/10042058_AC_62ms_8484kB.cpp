#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
#define maxn 1000005
using namespace std;
typedef long long ll;

int pre[maxn], p[maxn];
void print(int k)
{

    if(k == -1)
        return ;
	print(pre[k]);
	printf("%d", p[k]);
}
int main()
{
	int n, p1, p2;
	scanf("%d", &n);
	if(n == 1)
    {
		puts("1");
		return 0;
	}
	queue<int> q;
	q.push(1);
	pre[1] = -1;
	p[1] = 1;
    while(!q.empty())
    {
    	int d = q.front();
    	q.pop();
    	p1 = d * 10 % n;
    	p2 = (d * 10 + 1) % n;
    	if(p1 == 0)
    	{
    		print(d);
    		puts("0");
    		break;
        }
        if(p2 == 0)
        {
            print(d);
            puts("1");
            break;
        }
    	if(pre[p1] == 0)
    	{
    		pre[p1] = d;
    		p[p1] = 0;
    		q.push(p1);
        }
        if(pre[p2] == 0)
        {
            pre[p2] = d;
            p[p2] = 1;
            q.push(p2);
        }
	}
	return 0;
}
