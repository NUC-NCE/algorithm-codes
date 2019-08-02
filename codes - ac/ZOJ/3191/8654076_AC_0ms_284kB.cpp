#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n>=0)
    {
        if(n==0)
            printf("Exactly 3 o'clock\n");
        if(n==30)
            printf("Exactly 2 o'clock\n");
        if(n==60)
            printf("Exactly 1 o'clock\n");
        if(n==90)
            printf("Exactly 0 o'clock\n");
        if(n==120)
            printf("Exactly 11 o'clock\n");
        if(n==150)
            printf("Exactly 10 o'clock\n");
        if(n==180)
            printf("Exactly 9 o'clock\n");
        if(n==210)
            printf("Exactly 8 o'clock\n");
        if(n==240)
            printf("Exactly 7 o'clock\n");
        if(n==270)
            printf("Exactly 6 o'clock\n");
        if(n==300)
            printf("Exactly 5 o'clock\n");
        if(n==330)
            printf("Exactly 4 o'clock\n");
        if(n>0&&n<30)
            printf("Between 2 o'clock and 3 o'clock\n");
        if(n>30&&n<60)
            printf("Between 1 o'clock and 2 o'clock\n");
        if(n>60&&n<90)
            printf("Between 0 o'clock and 1 o'clock\n");
        if(n>90&&n<120)
            printf("Between 11 o'clock and 0 o'clock\n");
        if(n>120&&n<150)
            printf("Between 10 o'clock and 11 o'clock\n");
        if(n>150&&n<180)
            printf("Between 9 o'clock and 10 o'clock\n");
        if(n>180&&n<210)
            printf("Between 8 o'clock and 9 o'clock\n");
        if(n>210&&n<240)
            printf("Between 7 o'clock and 8 o'clock\n");
        if(n>240&&n<270)
            printf("Between 6 o'clock and 7 o'clock\n");
        if(n>270&&n<300)
            printf("Between 5 o'clock and 6 o'clock\n");
        if(n>300&&n<330)
            printf("Between 4 o'clock and 5 o'clock\n");
        if(n>330&&n<360)
            printf("Between 3 o'clock and 4 o'clock\n");
    }
}
