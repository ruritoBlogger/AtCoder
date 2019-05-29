#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<bool> flag;
    rep(i,n)
    {
        cin >> v[i];
        flag.push_back(true);
    }

    ll ans = 0;

    ll ANS = 0;
    while(true)
    {
        ll high = 0;
        ll high_pos = 0;
        rep(i,n) if(high < v[i] && flag[i])
        {
            high = v[i];
            high_pos = i;
        }
        if(high == 0) break;
        if(high_pos - k < 0 && (n - 1 - high_pos) - k < 0) flag[high_pos] = false;

        if(high_pos + 1 - k >= 0)
        {
            ll tmp = 0;
            vector<ll>having;
            rep(i,high_pos+1)
            {
                tmp += v[i];
                if(v[i] < 0)having.push_back(v[i]);
            }
            if(tmp > 0)
            {
                ans = tmp;
                k -= high_pos;
                if(k < having.size())
                {
                    sort(all(having),greater<ll>());
                    rep(i,k) ans -= having[i];
                }
                else
                {
                    rep(i,having.size()) ans -= having[i];
                }
            }
        }
        else
        {
            ll tmp = 0;
            vector<ll>having;
            rep(i,high_pos+1)
            {
                tmp += v[v.size() - 1 -i];
                if(v[v.size() - 1 -i] < 0)having.push_back(v[v.size() - 1 -i]);
            }
            if(tmp > 0)
            {
                ans = tmp;
                k -= high_pos;
                if(k < having.size())
                {
                    sort(all(having),greater<ll>());
                    rep(i,k) ans -= having[i];
                }
                else
                {
                    rep(i,having.size()) ans -= having[i];
                }
            }
        }
        if(ANS < ans) ANS = ans;
    }
    cout << ANS << endl;
}
