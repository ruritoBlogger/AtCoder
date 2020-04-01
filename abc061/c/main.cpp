#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N,K;
    cin >> N >> K;
    vector<pair<ll, ll> >ab(N);
    rep(i,N) cin >> ab[i].first >> ab[i].second;

    ll tmp = 0;
    ll key = 0;
    
    sort(all(ab));
    rep(i,N)

    while( tmp < K )
    {
        tmp += ab[key].second;
        key++;
    }
    cout << ab[key-1].first << endl;
}
