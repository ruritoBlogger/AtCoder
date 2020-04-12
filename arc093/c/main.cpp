#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int N;
    cin >> N;

    vector<int> A(N+1, 0);
    REP(i, 1, N+1) cin >> A[i];

    A.push_back(0);

    vector<ll> dp(1,0);
    
    rep(i,N+1)
    {
        dp.push_back( dp[dp.size()-1] + abs(A[i+1]-A[i]) );
    }
    rep(i,A.size()) cout << A[i] << " ";
    cout << endl;
    rep(i,dp.size()) cout << dp[i] << " ";
    cout << endl;
}
