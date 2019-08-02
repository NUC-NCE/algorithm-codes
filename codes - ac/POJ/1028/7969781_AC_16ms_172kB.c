#include<stdio.h> 
#include<string.h> 
int main() 
{
	char s[105][75]={"http://www.acm.org/"},m[8]; 
 	int t=0,a=0; 
 	for(;;) 
 	{ 
 	    scanf("%s",m); 
 	    if(!strcmp(m,"QUIT")) 
		 	break; 
 	    if(!strcmp(m,"VISIT")) 
 	    { 
	        scanf("%s",s[++a]); 
 	        printf("%s\n",s[a]); 
 	        t=a; 
 	    } 
 	    if(!strcmp(m,"BACK")) 
 	    { 
	        if(!a) 
				printf("Ignored\n"); 
	        else 
				printf("%s\n",s[--a]); 
 	    } 
 	    if(!strcmp(m,"FORWARD")) 
 	    { 
 	        if(a==t) 
			 	printf("Ignored\n"); 
 	        else 
			 	printf("%s\n",s[++a]); 
 	    } 
 	} 
 	return 0; 
} 