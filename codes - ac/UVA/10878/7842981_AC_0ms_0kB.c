#include <stdio.h>
int main()
{
    int i=0;
    int p=0;
    char a; 
    while((a=getchar())!=EOF)
	{
		if(a=='\n')
        {
        	if(i==8)
        	{
        		putchar(p);
        		i=0;
			}
			p=0;
		}
        else
		{
            if(a=='o')
            {
               	p=p*2+1;
				i++;
			}
            if(a==' ')
            {
                p=p*2;
                i++;
			}
        }
    }
    return 0;
}