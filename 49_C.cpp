#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    cin >> s;

    int last = s.size() - 1;
    while(true)
    {
        if( s[last] == 'r' && s[last-1] == 'e' && s[last-2] == 'm' && s[last-3] == 'a' && s[last-4] == 'e' && s[last-5] == 'r' && s[last-6] == 'd')
        {
            last -= 7;
            continue;
        }
        if( s[last] == 'r' && s[last-1] == 'e' && s[last-2] == 's' && s[last-3] == 'a' && s[last-4] == 'r' && s[last-5] == 'e' )
        {
            last -= 6;
            continue;
        }
        if( ( s[last] == 'm' && s[last-1] == 'a' && s[last-2] == 'e' && s[last-3] == 'r' && s[last-4] == 'd' )
                || ( s[last] == 'e' && s[last-1] == 's' && s[last-2] == 'a' && s[last-3] == 'r' && s[last-4] == 'e' ) )
        {
            last -= 5;
            continue;
        }
        else if(last == -1)
        {
            cout << "YES" << endl;
            return 0;
        }
        cout << "NO" << endl;
        return 0;
    }

}
