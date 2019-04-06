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
    
    ll max = *max_element(all(a));
    ll ans = 0;
    ll tmp = a.size();
    if(max > a.size())
    {
        cout << a.size() << endl;
        return 0;
    }
    for(ll i = 0; i < max;i++)
    {
        ll count = std::count(all(a),i+1);
        if(i > tmp)
        {
            if(i+1==max) ans += tmp;
            else
            {
                ans += count;
                tmp -= count;
            }
            continue;
        }
        if(count == 0)
        {
            continue;
        }
        if(count == i+1)
        {
            tmp -= count;
            continue;
        }
        else if(count < i+1)
        {
            ans += count;
            tmp -= count;
        }
        else
        {
            ans += count - (i+1);
            tmp -= count;
        }
    }
    cout << ans << endl;
}
