#include<bits/stdc++.h>
using namespace std;
int a[13]={0,6,2,2,5,0,3,5,1,4,6,2,4};
int y,m,d,h,mi,s;
int compare(int a, int b, int c, int x, int y, int z)
{
    if(a==x&&b==y&&c==z)
        return 0;
    if((a> x)||(a==x&&b>y)||(a==x&&b==y&&c>z))
        return 1;
    return -1;
}
int pass(int y)
{
    y%=100;
    y+=y/4;
    return y%7;
}
int whatday(int d, int m, int y)
{
    int ans;
    if(m == 1 || m == 2){m += 12; y--;}
    if((y < 1752) || (y == 1752 && m < 9) || (y == 1752 && m == 9 && d < 3))
        ans = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 + 5) % 7;
    else
        ans = (d + 2 * m + 3 * (m + 1) / 5 + y  + y / 4 - y / 100 + y / 400) % 7;
    return ans + 1;
}
int main()
{
   int t;
   char c[100];
   scanf("%d",&t);
   int z=0;
   while(t--){
        scanf("%d-%d-%d %d:%d:%d",&y,&m,&d,&h,&mi,&s);
        printf("Case #%d: ",++z);
        if(m>3&&m<11)
            printf("PDT\n");
        else if(m<3||m>11)
            printf("PST\n");
        else if(m==3){
            int p=0,cnt=0;
            while(cnt<2)
                if(whatday(++p,m,y)==7)
                    cnt++;
            if(d<p)
                printf("PST\n");
            else if(d>p)
                printf("PDT\n");
            else{
                    if(compare(h,mi,s,2,0,0)==0||h==2)
                        printf("Neither\n");
                    else if(compare(h, mi, s, 3, 0, 0) >= 0)
                        printf("PDT\n");
                    else
                        printf("PST\n");
            }
        }
        else{
            int p=0,cnt=0;
            while(cnt<1)
                if(whatday(++p,m,y)==7)
                    cnt++;
            if(d<p)
                printf("PDT\n");
            else if(d>p)
                printf("PST\n");
            else{
                if(compare(h, mi, s, 1, 0, 0) >= 0 && compare(h, mi, s, 2, 0, 0) < 0)
                    printf("Both\n");
                else if(compare(h, mi, s, 2, 0, 0) >= 0)
                    printf("PST\n");
                else
                    printf("PDT\n");
            }
        }
    }
    return 0;
}
