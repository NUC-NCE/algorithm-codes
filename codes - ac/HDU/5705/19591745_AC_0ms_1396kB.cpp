#include<bits/stdc++.h>
using namespace std;

double h,m,s;
int main()
{
    int cas=1;
    while(scanf("%lf:%lf:%lf",&h,&m,&s)!=EOF){
        double dis;
        scanf("%lf",&dis);
        double dus=h*30+m*0.5+s/120.0;//时针
        while(dus>=360)
            dus-=360;
        double duf=m*6+s/10.0;//分针
        double ret;
        //cout<<dus<<"  "<<duf<<endl;
        if(dus<=duf){
            if(duf-dus<=180){
                double temp=duf-dus;//相差度数
                if(dis>temp)
                    ret=dis-temp;
                else
                    ret=360-(dis+temp);
                //cout<<1<<endl;
            }
            else{
                double temp=360-(duf-dus);
                if(dis>=temp)
                    ret=dis+temp;
                else
                    ret=temp-dis;
                //cout<<11<<endl;
            }
        }
        else{
            if(dus-duf<=180){
                double temp=dus-duf;
                if(dis<temp)
                    ret=temp-dis;
                else
                    ret=dus+temp;
                //cout<<111<<endl;
            }
            else{
                double temp=360-(dus-duf);
                if(dis>temp)
                    ret=dis-temp;
                else
                    ret=360-(dis+temp);
            }
        }
        ret=ret*120/11;
        //cout<<ret<<endl;
        int ss=(int)(s+ret);
        int res=0;
        if(ss>=60){
            res=ss/60;
            ss%=60;
        }

        int mm=m+res;
        res=0;
        if(mm>=60){
            res=mm/60;
            mm%=60;
        }

        int hh=(h+res);
        hh%=12;

        printf("Case #%d: %02d:%02d:%02d\n",cas++,hh,mm,ss);
    }
    return 0;
}
