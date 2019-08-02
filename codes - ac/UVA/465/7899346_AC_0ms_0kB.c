#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define INF 0x7fffffff

char a[1000];
char b[1000];
void solve(char ch[]) 
{
	int i;
	for(i=0; i<strlen(ch); i++)
	{
		if(ch[i]!='0')
			break;
	}
	strcpy(ch,ch+i);
} 

int main()
{
	int i,j;
	double num1,num2;
	char str;
	while(scanf("%s %c %s",a,&str,b)!=EOF)
	{
		printf("%s %c %s\n",a,str,b);
		solve(a);
		solve(b);
		num1=atof(a);
		num2=atof(b);
		if(num1 > INF)
			printf("first number too big\n");
		if(num2 > INF)
			printf("second number too big\n");
		if(str=='+')
		{
			if((num1+num2)>INF)
				printf("result too big\n");
		}
		if(str=='*')
		{
			if((num1*num2)>INF)
				printf("result too big\n");
		}
	}
	return 0;
}