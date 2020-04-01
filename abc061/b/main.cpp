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
    int N,M;
    cin >> N >> M;

    set<ll> key;
    multiset<ll> roop;
    rep(i,M)
    {
        int tmp, tmp2;
        cin >> tmp >> tmp2;
        key.insert(tmp);
        key.insert(tmp2);
        roop.insert(tmp);
        roop.insert(tmp2);
    }
    
    ll i = 1;
    for( ll i = 1;i <= N; i++ )
    {
        if( !roop.count(i) )  cout << 0 << endl;
        else cout << roop.count(i) << endl;
    }
}
