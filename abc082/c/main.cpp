#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,a.size()) cin >> a[i];
    sort(all(a));
    ll ans = 0;
    
    ll tmp = 0;
    ll last = a[0];
    rep(i,a.size())
    {
        if(last != a[i] && last != tmp)
        {
            if( tmp > last) ans += tmp-last;
            else ans += tmp;
            tmp = 1;
            last = a[i];
        }
        else if(last != a[i])
        {
            last = a[i];
            tmp = 1;
        }
        else tmp++;
    }
    
    if(last != tmp)
    {
        if( tmp > last )ans += tmp-last;
        else ans += tmp;
    }

    cout << ans << endl;
}
