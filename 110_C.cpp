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
    string s,t;
    cin >> s >> t;

    multiset<char> S,T;
    set<char> SS,TT;
    rep(i,s.size())
    {
        S.insert(s[i]);
        SS.insert(s[i]);
    }
    rep(i,t.size())
    {
        T.insert(t[i]);
        TT.insert(t[i]);
    }

    vector<ll> useT;
    for(set<char>::iterator itr = TT.begin(); itr != TT.end(); ++itr) {
        useT.push_back( T.count(*itr) );
    }

    vector<ll> useS;
    for(set<char>::iterator itr = SS.begin(); itr != SS.end(); ++itr) {
        useS.push_back( S.count(*itr) );
    }

    sort(all(useT));
    sort(all(useS));
    if( useT.size() != useS.size() )
    {
        cout << "No" << endl;
    }
    else
    {
        rep(i,useT.size())
        {
            if(useT[i] != useS[i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
}
