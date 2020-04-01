#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<pair<ll, ll> > bc(m);
    ll ans = 0;
    rep(i,n)
    {
        cin >> a[i];
        ans += a[i];
    }
    rep(i,m) cin >> bc[i].second >> bc[i].first;
    sort(all(bc),greater<pair<ll, ll> >());
    sort(all(a));
    ll tmp= 0;
    ll tmp_n = 0;
    rep(i,n)
    {
        if(a[i] < bc[tmp].first)
        {
            ans += (bc[tmp].first - a[i]);
            bc[tmp].second--;
            if(bc[tmp].second == 0) tmp++;
            if(tmp == m) break;
        }
        else break;
    }
    cout << ans << endl;
}
