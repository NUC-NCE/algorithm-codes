#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
char str[1000010];
int a[1000010],s;
void get_next()
{
    int i = 0,j = -1;
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
        s = strlen(str);
        get_next();
        int x=s-a[s];
        if(s % x == 0)
        {
            if(s == x)
                cout << s << endl;
            else
                cout << "0" << endl;
        }
        else
            cout << x - (s % x)<< endl;
    }
    return 0;
}
