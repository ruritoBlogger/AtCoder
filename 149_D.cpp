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
    int N,K,R,S,P;
    cin >> N >> K >> R >> S >> P;

    string T;
    cin >> T;

    vector<multiset<char> >t(K);
    vector<set<char> > key(K);
    rep(i,T.size())
    {
        if( i < K )
        {
            t[i].insert( T[i] );
            key[i].insert( T[i] );
        }
        else if( T[i] != T[i-K] )
        {
            t[ i%K ].insert( T[i] );
            key[i%K].insert( T[i] );
        }
        else T[i] = '*';
    }
    ll ans = 0;
    rep(i,t.size())
    {
        ll R_ans = 0;
        ll P_ans = 0;
        ll S_ans = 0;
        for( set<char>::iterator itr = key[i].begin(); itr != key[i].end(); itr++ )
        {
            if( *itr == 'r' ) P_ans += t[i].count(*itr);
            else if( *itr == 'p' ) S_ans += t[i].count(*itr);
            else R_ans += t[i].count(*itr);
        }
        //cout << "R is " << R_ans << " and S is " << S_ans << " and P is " << P_ans << endl;
        ans += R_ans * R + S_ans * S + P_ans * P;
    }
    cout << ans << endl;
}
