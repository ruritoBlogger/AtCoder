#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll L,R;
    cin >> L >> R;
    if(R-L>2019) cout << 0 << endl;
    else
    {
        ll ans = INF;
        for(ll i = L;i < R;i++) for(ll j = L;j <= R;j++) if(ans > (i*j)%2019 && i  < j) ans = (i*j)%2019;
        cout << ans << endl;
    }
}

