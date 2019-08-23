#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll kai(ll i)
{
    if(i == 2) return 1;
    else return kai(i-1) + i - 1;
}

int main()
{
    int N;
    cin >> N;

    vector<string> s(N);
    rep(i,N) cin >> s[i];
    rep(i,N) sort(all(s[i]));
    sort(all(s));
    ll ans = 0;
    ll tmp = 0;

    rep(i,N-1)
    {
        if(s[i] == s[i+1])tmp++;
        else
        {
            if(tmp != 0)ans += kai(tmp+1);
            tmp = 0;
        }
    }
    if(tmp != 0)
    {
        ans += kai(tmp+1);
    }
    cout << ans << endl;
}
