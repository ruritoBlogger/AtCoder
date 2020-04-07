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
    string s,t;
    cin >> s >> t;

    multiset<char> set_s;
    multiset<char> set_t;

    rep(i,s.size()) set_s.insert(s[i]);
    rep(i,t.size()) set_t.insert(t[i]);

    string S = "";
    string T = "";

    for(multiset<char>::iterator itr = set_s.begin(); itr != set_s.end(); itr++)
    {
        S += *itr;
    }
    
    for(multiset<char>::iterator itr = set_t.begin(); itr != set_t.end(); itr++)
    {
        T += *itr;
    }
    reverse(all(T));


    if( S < T ) cout << "Yes" << endl;
    else cout << "No" << endl;
}
