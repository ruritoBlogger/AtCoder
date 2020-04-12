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

    vector<string> S(N);
    vector<ll> P(N);
    ll total = 0;
    rep(i,N)
    {
        cin >> S[i] >> P[i];
        total += P[i];
    }

    std::vector<ll>::iterator iter = std::max_element(all(P));
    size_t index = std::distance(P.begin(), iter);
    
    if( P[index]*2 > total ) cout << S[index] << endl;
    else cout << "atcoder" << endl;
}
