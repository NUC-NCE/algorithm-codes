#include<stdio.h>  
#include<string.h>    
int main (){  
    int i,j,n,q=1;  
    double P,I,U,c;  
    char str[1001];    
    while(scanf("%d\n",&n) != EOF)
	{  
        while(n--)
		{  
            P = 0;  
            I = 0;  
            U = 0;  
            c = 1;  
            gets(str);  
            for(i=0;i<strlen(str);)
			{  
                if(str[i]=='P'&&str[i+1]=='=')
				{  
                    i+=2;  
                    while(str[i]>='0'&&str[i]<='9')
					{  
                        P=P*10+str[i]-'0';  
                        i++;  
                    } 
                    if(str[i]=='.')
					{  
                        i++;  
                        while(str[i]>='0'&&str[i]<='9')
						{  
                            c*=0.1;   
                            P+=c*(str[i] - '0');  
                            i++;                          
						}  
                    }  
                    c=1;  
                    if(str[i]=='k')
					{  
                        P*=1000;  
                        i++;  
                    }  
                    if(str[i]=='m')
					{  
                        P/=1000;  
                        i++;  
                    }  
                    if(str[i]=='M')
					{  
                        P*=1000000;   
                        i++;  
                    }  
                } 
                if(str[i] =='U'&&str[i+1]=='=')
				{  
                    i+=2;  
                    while(str[i]>='0'&&str[i]<='9')
					{  
                        U=U*10+str[i]-'0';  
                        i++;  
                    }
                    if(str[i]=='.')
					{  
                        i++;  
                        while(str[i]>='0'&&str[i]<='9')
						{  
                            c*=0.1;   
                            U+=c*(str[i] - '0');  
                            i++;  
                        }  
                    }  
                    c=1;  
                    if(str[i]=='k')
					{  
                        U*=1000;  
                        i++;  
                    }  
                    if(str[i]=='m')
					{  
                        U/=1000;  
                        i++;  
                    }  
                    if(str[i]=='M')
					{  
                        U*=1000000;   
                        i++;  
                    }  
                }
                if(str[i]=='I'&&str[i+1]=='=')
				{  
                    i+=2;
                    while(str[i]>='0'&&str[i]<='9')
					{  
                        I=I*10+str[i]-'0';  
                        i++;  
                    } 
                    if(str[i]=='.')
					{  
                        i++;  
                        while(str[i]>='0'&&str[i]<='9')
						{  
                            c*=0.1;   
                            I+=c*(str[i] - '0');  
                            i++;  
                        }  
                    }  
                    c=1;  
                    if(str[i]=='k')
					{  
                        I*=1000;  
                        i++;  
                    }  
                    if(str[i]=='m')
					{  
                        I/=1000;  
                        i++;  
                    }  
                    if(str[i]=='M')
					{  
                        I*=1000000;   
                        i++;  
                    }  
                }  
                i++;  
            }   
            printf("Problem #%d\n",q);  
            if(P>0&&I>0)
                printf("U=%.2lfV\n",P/I);
            if(P>0&&U>0) 
                printf("I=%.2lfA\n",P/U);  
            if(U>0&&I>0)  
                printf("P=%.2lfW\n",U*I);   
            printf("\n");  
            q++;  
        }  
    }  
    return 0;  
} 