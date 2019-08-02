#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
char str[1000010];
ll a[1000010],s;
void get_next(char str[])
{
    memset(a,0,sizeof(a));
    ll i = 0,j = -1;
    a[0] = -1;
    while(i < s)
    {
        if(j == -1 || str[i] == str[j])
        {
            i++;
            j++;
            a[i] = j;
        }
        else
            j = a[j];
    }
}
int main()
{
 ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> str;
        s = (ll)strlen(str);
        get_next(str);
        if(s % (s - a[s]) == 0)
        {
            if(s == (s - a[s]))
                cout << s << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << (s - a[s]) - (s % (s - a[s]))<< endl;
    }
    return 0;
}
