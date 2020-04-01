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
    set<ll> A;
    rep(i,N)
    {
        ll tmp;
        cin >> tmp;
        A.insert(tmp);
    }
    if( N == A.size() ) cout << "YES" << endl;
    else cout << "NO" << endl;


}
