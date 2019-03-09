#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define INF 99999999
int main()
{
    ll a,b;
    cin >> a >> b;
    ll tmp1,tmp2;
    vector<pair <ll,ll> > c(a);
    for(ll i = 0;i < a;i++)
    {
        cin >> tmp1>> tmp2;
        c[i] = make_pair(tmp1,tmp2);
    }
    ll ans = 0;
    sort(c.begin(),c.end());
    for(ll i = 0;i < c.size();i++)
    {
        if(c[i].second >= b)
        {
            ans += c[i].first * b;
            cout << ans << endl;
            return 0;
        }
        else
        {
            ans += c[i].first * c[i].second;
            b -= c[i].second;
        }
    }
}
