# include <cstdio>
# include <cstring>
# include <algorithm>

using namespace std;

const int maxn = 1005;

char a[maxn], b[maxn];
int m[maxn][maxn];

int main()
{
    scanf("%s",a);

    scanf("%s",b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    for(int i=0; i<=len1; i++)
        m[i][0]=i;
    for(int i=0; i<=len2; i++)
        m[0][i]=i;
    for(int i=1; i<=len2; i++)
        for(int j=1; j<=len1; j++)
        {
            int mark = 0;
            if(a[j-1]!=b[i-1])
                mark = 1;
            m[i][j] = min(m[i-1][j]+1,m[i][j-1]+1);
            m[i][j] = min(m[i][j],m[i-1][j-1]+mark);
        }


    printf("%d\n",m[len2][len1]);
    return 0;
}
