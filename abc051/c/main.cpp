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
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    vector<char> go_key;
    vector<char> back_key;

    if( sy > ty )
    {
        rep(i, sy-ty)
        {
            go_key.push_back('D');
            back_key.push_back('U');
        }
    }
    else 
    {
        rep(i, ty-sy)
        {
            go_key.push_back('U');
            back_key.push_back('D');
        }
    }
    if( sx > tx )
    {
        rep(i, sx-tx)
        {
            go_key.push_back('L');
            back_key.push_back('R');
        }
    }
    else 
    {
        rep(i, tx-sx)
        {
            go_key.push_back('R');
            back_key.push_back('L');
        }
    }

    
    rep(i,go_key.size()) cout << go_key[i];
    rep(i,back_key.size()) cout << back_key[i];
    
    if( sx < tx ) cout << 'L' << go_key[0];
    else cout << 'R' << go_key[0];
    rep(i,go_key.size()) cout << go_key[i];
    cout << go_key[go_key.size()-1] << back_key[0];

    if( sx < tx == 'R' ) cout << 'L' << back_key[0];
    else cout << 'R' << back_key[0];
    rep(i,back_key.size()) cout << back_key[i];
    cout << back_key[back_key.size()-1] << go_key[0];
    cout << endl;
}
