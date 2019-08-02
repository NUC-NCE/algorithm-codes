#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    int y,d;
    while(n--){
        scanf("%d%d",&y,&d);
        while(y<=x)
        {
            y+=d;
        }
        x=y;
    }
    printf("%d\n",y);
    return 0;
}
