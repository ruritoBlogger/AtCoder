#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    ll N;
    cin >> N;

    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    
    vector<ll> dp(N,0);
    dp[0] = A[0];
    REP(i, 1, N) dp[i] = dp[i-1] + A[i];

    ll total = dp[dp.size()-1];

    ll diff = INF_LL;
    ll point = 0;

    rep(i,N)
    {
        if( abs( total - dp[i]*2 ) < diff )
        {
            diff = abs( total - dp[i]*2 );
            point = i;
        }
    }
    cout << abs(total-dp[point]-dp[point]) << endl;
}
