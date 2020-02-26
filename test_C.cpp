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
    ll K,N;
    cin >> N >> K;

    vector<ll> h(N);
    rep(i,N) cin >> h[i];

    sort(all(h));
    
    //ll ans = h[K-1] - h[0];
    ll ans = INF;
    //rep(i,N-K+1)
    for( ll i = 0; i <= N-K+1; i++)
    {
        if( h[i+K-1] - h[i] < ans )
        {
            ans = h[i+K-1] - h[i];
        }
    }
    cout << ans << endl;

}
