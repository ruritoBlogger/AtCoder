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
    vector<int> P(N);
    rep(i,N) cin >> P[i];

    ll min_n =INF;
    ll ans = 0;
    rep(i,N)
    {
        if(min_n >= P[i])
        {
            ans++;
            min_n = P[i];
        }
    }
    cout << ans << endl;

}
