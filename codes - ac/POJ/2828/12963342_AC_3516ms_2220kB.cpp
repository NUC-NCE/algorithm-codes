#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int N = 750;
int b[N][N];
int sz[N];
int next[N];
int ps;
int bl;

void init()
{
    bl = 1;
    ps = 550;
    memset( sz, 0, sizeof(sz) );
    memset( next, -1, sizeof(next) );
}

void spilt( int cur )
{
    int tmp = next[cur];
    int ncur = next[cur] = bl++;
    next[ncur] = tmp;
    for ( int i = sz[cur] / 2; i < sz[cur]; i++ )
    {
        b[ncur][sz[ncur]++] = b[cur][i];
    }
    sz[cur] = sz[cur] / 2;
}

void insert( int pos, int val )
{
    int cur = 0, p = sz[cur];
    while ( p < pos + 1 && next[cur] != -1 )
    {
        cur = next[cur];
        p += sz[cur];
    }
    if ( p < pos + 1 )
    {
        b[cur][sz[cur]++] = val;
    }
    else
    {
        p -= sz[cur];
        pos -= p;
        for ( int j = sz[cur] - 1; j >= pos; j-- )
        {
            b[cur][j + 1] = b[cur][j];
        }
        b[cur][pos] = val;
        sz[cur]++;
    }
    if ( sz[cur] > ps ) spilt(cur);
}

int main ()
{
    int n;
    while ( scanf("%d", &n) != EOF )
    {
        init();
        for ( int i = 0; i < n; i++ )
        {
            int pos, val;
            scanf("%d%d", &pos, &val);
            insert( pos, val );
        }
        int cnt = 0;
        for ( int i = 0; i != -1; i = next[i] )
        {
            for ( int j = 0; j < sz[i]; j++ )
            {
                printf("%d", b[i][j]);
                cnt++;
                if ( cnt != n )
                {
                    putchar(' ');
                }
                else
                {
                    putchar('\n');
                }
            }
        }
    }
    return 0;
}