#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
long long f[3000005];
void get_eular()
{
	for(int i=2;i<3000001;i++)
	{
		if(!f[i])
		{
			for(int j=i;j<3000001;j+=i)
			{
				if(!f[j])
                    f[j]=j;
				f[j]=f[j]/i*(i - 1);
			}
		}
	}
	for (int i=3;i<3000001;i++)
	{
		f[i]+=f[i-1];
	}
}

int main()
{
    get_eular();
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        printf("%lld\n",f[b]-f[a-1]);
    }
    return 0;
}
