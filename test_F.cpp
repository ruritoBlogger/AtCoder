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
    ll N;
    cin >> N;
    vector<ll> v(N);
    vector<ll> kisu;
    vector<ll> gusu;
    set<ll> KISU;
    set<ll> GUSU;
    multiset<ll> keyKISU;
    multiset<ll> keyGUSU;

    rep(i,N)
    {
        cin >> v[i];
        if( (i+2)%2 == 0 )
        {
            gusu.push_back(v[i]);
            GUSU.insert(v[i]);
            keyGUSU.insert(v[i]);
        }
        else
        {
            kisu.push_back(v[i]);
            KISU.insert(v[i]);
            keyKISU.insert(v[i]);
        }
    }
    /*
    cout << "gusu set" << endl;
    for(set<ll>::iterator itr = GUSU.begin(); itr != GUSU.end(); ++itr) cout << *itr << " ";
    cout << endl;
    
    cout << "kisu set" << endl;
    for(set<ll>::iterator itr = KISU.begin(); itr != KISU.end(); ++itr) cout << *itr << " ";
    cout << endl;

    cout << "gusu multiset" << endl;
    for(multiset<ll>::iterator itr = keyGUSU.begin(); itr != keyGUSU.end(); ++itr) cout << *itr << " ";
    cout << endl;
    
    cout << "kisu multiset" << endl;
    for(multiset<ll>::iterator itr = keyKISU.begin(); itr != keyKISU.end(); ++itr) cout << *itr << " ";
    cout << endl;

    */
    ll numGUSU = 0;
    ll numKISU = 0;
    ll KEY = min(GUSU.size(), KISU.size());

    ll nextGUSU = 0;
    ll nextKISU = 0;

    ll GUSU_KEY = 0;
    ll KISU_KEY = 0;
    for(set<ll>::iterator itr = GUSU.begin(); itr != GUSU.end(); ++itr)
    {
        if( numGUSU < keyGUSU.count(*itr) )
        {
            numGUSU = keyGUSU.count(*itr);
            GUSU_KEY = *itr;
        }
        else if( nextGUSU < keyGUSU.count(*itr) )
        {
            nextGUSU = keyGUSU.count(*itr);
        }
    }

    for(set<ll>::iterator itr = KISU.begin(); itr != KISU.end(); ++itr)
    {
        if( numKISU < keyKISU.count(*itr) )
        {
            numKISU = keyKISU.count(*itr);
            KISU_KEY = *itr;
        }
        else if( nextKISU < keyKISU.count(*itr) )
        {
            nextKISU = keyKISU.count(*itr);
        }

    }

    if( GUSU_KEY != KISU_KEY || (KISU.size() == GUSU.size() && KISU.size() == 1) ) ;
    else
    {
        if( numKISU+ nextGUSU < numGUSU+nextKISU )
        {
            numKISU = nextKISU;
        }
        else
        {
            numGUSU = nextGUSU;
        }
    }

    /*
    cout << "gusu set" << endl;
    for(set<ll>::iterator itr = GUSU.begin(); itr != GUSU.end(); ++itr) cout << *itr << " ";
    cout << endl;
    
    cout << "kisu set" << endl;
    for(set<ll>::iterator itr = KISU.begin(); itr != KISU.end(); ++itr) cout << *itr << " ";
    cout << endl;
 
    cout << "gusu multiset" << endl;
    for(multiset<ll>::iterator itr = keyGUSU.begin(); itr != keyGUSU.end(); ++itr) cout << *itr << " ";
    cout << endl;
    
    cout << "kisu multiset" << endl;
    for(multiset<ll>::iterator itr = keyKISU.begin(); itr != keyKISU.end(); ++itr) cout << *itr << " ";
    cout << endl;
    */ 
    

    if( KISU.size() == GUSU.size() && *KISU.begin() == *GUSU.begin() && KISU.size() == 1 ) cout << keyKISU.size() << endl;
    else cout << keyKISU.size() - numKISU + keyGUSU.size() - numGUSU << endl;
}
