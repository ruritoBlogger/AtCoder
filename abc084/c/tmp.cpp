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
    int N;
    cin >> N;

    vector<int> C(N-1);
    vector<int> S(N-1);
    vector<int> F(N-1);
    rep(i,N-1) cin >> C[i] >> S[i] >> F[i];

    //vector<ll> ans(N,0);

    rep(i,N)
    {
        ll ans = 0;
        REP(j, i, N-1)
        {
            if( ans > S[j] ) ans += ans%F[j];
            else ans = S[j];
            ans += C[j];
        }
        cout << ans << endl;
    }
}