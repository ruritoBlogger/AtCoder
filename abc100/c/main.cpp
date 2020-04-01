#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll waru2(ll i)
{
    if(i%2 == 0) return waru2(i/2) + 1;
    else return 0;
}

int main()
{
    int N;
    cin >> N;

    vector<ll> a(N);
    ll ans = 0;
    rep(i,N)
    {
        cin >> a[i];
        if(a[i]%2==0) ans += waru2(a[i]);
    }
    cout << ans << endl;
}
