#include<cstdio>
#include<math.h>
#include<string.h>
using namespace std;
int hh,mm;
int main()
{
    char c;
    while(~scanf("%d:%d",&hh,&mm))
    {
            int q=hh/10+(hh%10)*10;
            if((hh>=06&&hh<10&&hh>00)||(hh==05&&mm>50))
                printf("%d\n",(10-hh)*60+1-mm);
            else if((hh==15&&mm>51)||(hh>15&&hh<20))
            {
                printf("%d\n",(20-hh)*60+2-mm);
            }
            else if(hh<23||(hh==23&&mm<=32))
            {
                if(q>=mm)
                    printf("%d\n",q-mm);
                else
                {
                    hh++;
                    q=hh/10+(hh%10)*10;
                    printf("%d\n",q+60-mm);
                }
            }
            else
                printf("%d\n",60-mm);
    }
    return 0;
}
