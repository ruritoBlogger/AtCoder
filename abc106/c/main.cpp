#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    ll k;
    cin >> s >> k;
    ll now = 0;
    ll length = 0;
    //cout << k << endl;
    rep(i,s.size())
    {
        now = int(s[i]) - 48;
        if(now == 1) length++;
        else
        {
            cout << s[i] << endl;
            return 0;
        }
        if(length > k - 1)
        {
            cout << 1 << endl;
            return 0;
        }
    }
}
