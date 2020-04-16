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
    string s;
    cin >> s;

    vector<ll> ary(s.size()+1,0);
    // (len, isLeft)
    vector<pair<int, int> > keys;
    pair<int, int> key = make_pair(1, 0);
    if( s[0] == '>' ) key.second = 1;

    REP(i, 1, s.size())
    {
        if( s[i] == '>' && key.second != 1 )
        {
            keys.push_back(key);
            key.first = 1;
            key.second = 0;
        }
        else if( s[i] == '<' && key.second != 0 )
        {
            keys.push_back(key);
            key.first = 1;
            key.second = 1;
        }
        else key.first++;
    }
    keys.push_back(key);
    
    rep(i, keys.size())
    {
        if( keys[i].second == 1 ) cout << keys[i].first << " > " << endl;
        else cout << keys[i].first << " < " << endl;
    }
    
    ll ans = 0;
    //rep(i,ary.size()) ans += ary[i];
    //cout << ans << endl;
}
