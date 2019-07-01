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

    vector<pair<ll, ll> > A(N);

    rep(i,N) cin >> A[i].second >> A[i].first;

    sort(all(A));
    cout << endl;

    ll ans = 0;
    rep(i,N)
    {
        if(ans + A[i].second > A[i].first)
        {
            cout << "No" << endl;
            return 0;
        }
        else ans += A[i].second;
    }
    cout << "Yes" << endl;
}
