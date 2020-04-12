#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)(n); i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n); i >= a; i--)
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

ll N,X;
vector<ll> total(51);
vector<ll> p_total(51);

ll dfs( ll n, ll x )
{
    if( x >= total[n]-1 )
    {
        return p_total[n];
    }
    else if( x > total[n-1]+2 )
    {
        return dfs( n-1, x - total[n-1]-2 ) + p_total[n-1]+1;
    }
    else if( x - total[n-1] == 2 )
    {
        return p_total[n-1]+1;
    }
    else if( 1 < x ) return dfs(n-1, x-1);
    else return 0;
}

int main()
{
    cin >> N >> X;

    total[0] = 1;
    p_total[0] = 1;

    REP(i, 1, 51)
    {
        chmax(total[i],total[i-1]*2+3);
        chmax(p_total[i],p_total[i-1]*2+1);
    }

    cout << dfs(N,X) << endl;
}
