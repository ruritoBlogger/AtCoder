#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i,N) cin >> p[i];

    sort(all(p));
    ll ans = 0;
    rep(i,N-1) ans += p[i];
    cout << ans + p[p.size()-1]/2 << endl;
}
