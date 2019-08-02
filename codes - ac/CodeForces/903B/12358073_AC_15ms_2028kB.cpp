#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int h1,h2,a1,a2,c1;
    scanf("%d%d%d%d%d",&h1,&a1,&c1,&h2,&a2);
    int a=0,b=0;
    while(h2>0){
        if(h1<=a2&&h2>a1){
            h1=h1+c1-a2;
            b++;
            continue;
        }
        h1-=a2;
        h2-=a1;
        a++;
    }
    printf("%d\n",a+b);
    for(int i=1;i<=b;i++)
        printf("HEAL\n");
    for(int i=1;i<a;i++)
        printf("STRIKE\n");
    printf("STRIKE");
    return 0;
}