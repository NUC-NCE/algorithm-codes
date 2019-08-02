#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define N 100010
char s[1000010], p[N];
int next[N];
int lens, lenp;
int KMP()
{
	int i=0,j=0,count=0;
	while(i!=lens&&j!=lenp)
	{
		if(s[i]==p[j]||j==-1)
        {
            i++;
            j++;
        }
		else
			j=next[j];
		if(j==lenp)
		{
			count++;
			j=next[j];
		}
	}
	return count;
}
int main()
{
	int n;
	int len;
	int ans;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s %s", p, s);
		lens = strlen(s);
		lenp = strlen(p);
		int i=0,j=-1;
        next[0]=-1;
        while(i<lenp)
        {
            if(j==-1||s[i]==s[j])
            {
                i++;
                j++;
                next[i]=j;
            }
            else
                j=next[j];
        }
		ans=KMP();
		printf("%d\n", ans);
	}
	return 0;
}
