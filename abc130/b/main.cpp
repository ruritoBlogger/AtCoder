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
    int N,X;
    cin >> N >> X;

    vector<int> L(N);
    rep(i,N) cin >> L[i];

    vector<int> dp(1,0);
    ll ans = 1;
    rep(i,N)
    {
        dp.push_back(dp[dp.size()-1] + L[i] );
        if( dp[dp.size()-1] <= X )ans++;
    }
    cout << ans << endl;

}
