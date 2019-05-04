#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll n;
    ll waru = 998244353;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    //rep(i,n) cout << a[i];
    
    sort(all(a),greater<int>());
    
    ll red,blue,green;
    ll ans = 0;
    bool flag = false;

    rep(i,n)
    {
        int j = 0;
        for(;j <= i;j++) red += a[j];

        for(int k = j + 1;k < n;k++)
        {
            for(int o = j + 1;o <= k;o++) blue += a[o];
            for(int o = j + k + 2;o < n;o++) green += a[o];
            if(abs(blue - green) >= red && red >= blue + green)
            {
                flag = true;
                break;
            }
            ans++;
        }
        if(flag) break;
    }
    cout << ans%waru << endl;
}
