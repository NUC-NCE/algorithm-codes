#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	char num[7];
	char name[7];
	int score;
};

int num(const void *a, const void *b)
{
	const struct student *p=a;
	const struct student *q=b;
	return strcmp(p->num,q->num);
}

int name(const void *a, const void *b)
{
	const struct student *p=a;
	const struct student *q=b;

	if(strcmp(p->name,q->name)>0)
	{
		return 1;
	}else if(strcmp(p->name,q->name)==0&&strcmp(p->num,q->num)>0)
	{
		return 1;
	}else
	{
		return -1;
	}
}

int score(const void *a, const void *b)
{
	const struct student *p=a;
	const struct student *q=b;

	if(p->score>q->score)
	{
		return 1;
	}else if(p->score==q->score&&strcmp(p->num,q->num)> 0)
	{
		return 1;
	}else
	{
		return -1;
	}
}

int main()
{
	int i,n,k;
	struct student people[100001];
	static int j=1;

	while(scanf("%d %d",&n,&k)!=EOF)
	{
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%s %s %d", people[i].num,people[i].name,&people[i].score);
		}
		switch(k)
        {
            case 1 :
                qsort(people, n, sizeof(people[0]), num);
                break;
            case 2 :
                qsort(people, n, sizeof(people[0]), name);
                break;
            case 3 :
                qsort(people, n, sizeof(people[0]), score);
                break;
        }
		printf("Case %d:\n",j++);
		for(i=0;i<n;i++)
		{
			printf("%s %s %d\n", people[i].num,people[i].name,people[i].score);
		}
	}
	return 0;
}