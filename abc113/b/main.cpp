#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
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
    int N,T,A;
    cin >> N >> T >> A;

    vector<int> H(N);
    rep(i,N) cin >> H[i];

    ll ans = abs( A*1000 - (T*1000 - H[0]*6));
    int key = 1;

    REP(i, 1, N)
    {
        if( ans > abs( A*1000 - (T*1000 - H[i]*6) ) )
        {
            ans = abs( A*1000 - (T*1000 - H[i]*6) );
            key = i+1;
        }
    }
    cout << key << endl;
}
