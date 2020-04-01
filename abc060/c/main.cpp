#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    ll N,T;
    cin >> N >> T;

    vector<ll> t(N);
    rep(i,N) cin >> t[i];

    ll ans = 0;
    rep(i,N-1)
    {
        if( t[i+1] - t[i] < T ) ans += t[i+1] - t[i];
        else ans += T;
    }
    cout << ans+T << endl;
}
