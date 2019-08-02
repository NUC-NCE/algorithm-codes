#include <iostream>  
#include <cstdio>  
using namespace std;  
int main()  
{  
    int a, b, c;  
    scanf("%d%d%d", &a, &b, &c);  
    int t = b-a;  
    if(c == 0){  
        if(a == b) printf("YES");  
        else printf("NO");  
    }  
   else{
        if(t%c == 0 && ((t>=0&&c > 0)|| (t<=0 && c < 0))) printf("YES");  
        else printf("NO");  
    }  
    return 0;  
}  