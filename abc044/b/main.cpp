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
    string w;
    cin >> w;

    set<char> roop;
    multiset<char> key;

    rep(i,w.size())
    {
        roop.insert(w[i]);
        key.insert(w[i]);
    }

    for( set<char>::iterator itr = roop.begin(); itr != roop.end(); itr++ )
    {
        if( key.count(*itr)%2 != 0 )
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
