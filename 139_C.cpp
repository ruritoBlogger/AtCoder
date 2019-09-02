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
    vector<ll> H(N);
    rep(i,N) cin >> H[i];
    ll tmp = 0;
    ll ans = 0;
    rep(i,N-1)
    {
        if(H[i] >= H[i+1])
        {
            tmp++;
        }
        else
        {
            ans = max(ans, tmp);
            tmp = 0;
        }
    }
    //cout << ans << " " << tmp << endl;
    cout << max(ans, tmp) << endl;
}
