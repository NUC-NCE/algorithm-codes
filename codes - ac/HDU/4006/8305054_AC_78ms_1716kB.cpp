#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    int temp;
    char name;
    while(~scanf("%d %d",&n,&k))
    {
    	priority_queue<int,vector<int>,greater<int> >q1;
    	for(int i=0;i<n;i++)
    	{
    		getchar();
    		scanf("%c",&name);
    		if(name=='I')
    		{
    			scanf("%d",&temp);
    			q1.push(temp);
    			if(q1.size()>k)
    				q1.pop();
			}
			else if(name=='Q')
				printf("%d\n",q1.top());
		}
    }
    return 0;
}