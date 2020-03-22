#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

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
    int N,K,R,S,P;
    cin >> N >> K >> R >> S >> P;

    string T;
    cin >> T;

    vector<multiset<char> >t(N);
    
    rep(i,K+1)
    {
        if( T[i] == 'r' ) t[i].insert('p');
        if( T[i] == 'p' ) t[i].insert('s');
        if( T[i] == 's' ) t[i].insert('r');

        for( ll j = K+i; j < N; j+= K )
        {
            if( T[j - K] == T[j] )continue;
            if( T[j] == 'r' ) t[i].insert('p');
            if( T[j] == 'p' ) t[i].insert('s');
            if( T[j] == 's' ) t[i].insert('r');
        }
    }

    rep(i,K+1)
    {   
        ll pickR = 0;
        ll pickS = 0;
        ll pickP = 0;
        if( t[i].find('r') != t[i].end() )pickR = t[i].count( 'r' ) * R;
        if( t[i].find('s') != t[i].end() )pickS = t[i].count( 's' ) * S;
        if( t[i].find('p') != t[i].end() )pickP = t[i].count( 'p' ) * P;

        cout << "r is " << pickP/P << " and s is " << pickR/R << " and p is " << pickS/S << endl;
    }
    
    ll ans = 0;
    rep(i,K+1)
    {
        ll pickR = 0;
        ll pickS = 0;
        ll pickP = 0;
        if( t[i].find('s') != t[i].end() )pickR = t[i].count( 's' ) * R;
        if( t[i].find('p') != t[i].end() )pickS = t[i].count( 'p' ) * S;
        if( t[i].find('r') != t[i].end() )pickP = t[i].count( 'r' ) * P;
        ans += max(pickR, max(pickS, pickP));
    }
    cout << ans << endl;
}
