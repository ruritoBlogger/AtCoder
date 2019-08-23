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
    sort(all(s));
    ll ans = 0;
    ll tmp = 0;
    rep(i,s.size()-1)
    {
        if(s[i] == s[i+1])tmp++;
        else
        {
            if(tmp == 0) ans++;
            else ans += tmp;
            tmp = 0;
        }
        //cout << ans << " " << endl;
    }
    if(tmp == 0) ans++;
    else ans += tmp;
    cout << ans << endl;
}
