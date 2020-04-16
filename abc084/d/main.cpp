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

std::vector<int> Eratosthenes( const int N )
{
    std::vector<bool> is_prime( N + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}

int main()
{
    int Q;
    cin >> Q;

    vector<int> l(Q);
    vector<int> r(Q);
    rep(i,Q) cin >> l[i] >> r[i];
    vector<bool> isPrime(1e5, false);

    vector<int> primes = Eratosthenes(1e5);
    
    rep(i, primes.size())
    {
        isPrime[i-1] = true;
    }

    vector<ll> dp(1, 0);
    rep(i, isPrime.size())
    {
        if( isPrime[i] ) dp.push_back(dp[dp.size()-1]+1);
        else dp.push_back(dp[dp.size()-1]);
    }
    rep(i, Q)
    {
    }
}
