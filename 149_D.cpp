#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;
    vector<int> a(N);
    rep(i,N) cin >> a[i];

    ll key = 1;
    ll ans = 0;
    rep(i,N)
    {
        if(a[i] == key) key++;
        else ans++;
    }
    if(key != 1) cout << ans << endl;
    else cout << -1 << endl;


}
