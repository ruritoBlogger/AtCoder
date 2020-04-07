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
    vector<string> s(N);
    rep(i,N) cin >> s[i];
    multiset<string> set_s;
    rep(i,N) set_s.insert(s[i]);


    int M;
    cin >> M;
    vector<string> t(M);
    rep(i,M) cin >> t[i];
    multiset<string> set_t;
    rep(i,M) set_t.insert(t[i]);

    int ans = 0;
    for(multiset<string>::iterator itr = set_s.begin(); itr != set_s.end(); itr++)
    {
        if( set_t.find( *itr ) != set_t.end() ) chmax(ans, (int)(set_s.count(*itr)-set_t.count(*itr)) );
        else chmax(ans, (int)(set_s.count(*itr)) );
    }
    cout << ans << endl;
}
