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
    ll Q,H,S,D,N;
    cin >> Q >> H >> S >> D >> N;
    
    if( Q*8 <= D && Q*8 <= H*4 && Q*8 <= S*2 )
    {
        cout << N*4*Q << endl;
    }
    else if( H*4 <= D && H*4 <= S*2 && H*4 <= Q*8 )
    {
        cout << N*2*H << endl;
    }
    else if( S*2 <= D )
    {
        cout << N*S << endl;
    }
    else
    {
        if( N%2 == 0 ) cout << N*D/2 << endl;
        else
        {
            if( Q*8 <= H*4 && Q*8 <= S*2 ) cout << (N-1)*D/2 + Q*4 << endl;
            else if( H*4 <= S*2 ) cout << (N-1)*D/2 + H*2 << endl;
            else cout << (N-1)*D/2 + S << endl;
        }
    }
}
