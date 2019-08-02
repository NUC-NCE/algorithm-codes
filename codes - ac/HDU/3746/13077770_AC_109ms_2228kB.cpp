

#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
char c1[1000010];
int   a[1000010];
int sum =0;
void get_net()
{
    int i=0,j=-1;
    a[0]=-1;
    while(i<(int)strlen(c1))
    {
        if(j==-1||c1[i]==c1[j])
        {
            i++;
            j++;
            a[i]=j;
        }
        else j=a[j];
    }
}
/*int KMP(char *c1,char *c2)
{
    sum =0;
    int m=strlen(c1),n=strlen(c2);
    int i=0,j=0;
    get_net(c2);
    while(i<m)
    {
        if(j==-1||c1[i]==c2[j])
        {
            i++;j++;
        }
        else j=a[j];
        if(j==n)  {sum++;j=0;}
    }
    return sum;
}*/
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    while(n--)
    {
        cin>>c1;
        int m=strlen(c1);
        int i=0,j=-1;
        a[0]=-1;
        while(i<m)
        {
            if(j==-1||c1[i]==c1[j])
            {
                i++;
                j++;
                a[i]=j;
            }
            else j=a[j];
        }
        int x=m-a[m];
        if(m%x==0)
			if(m/x==1)
				cout<<m<<endl;
			else
				cout<<"0"<<endl;
		else
			cout<<x-m%x<<endl;

    }
    return 0;
}

