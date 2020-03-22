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
    ll X,Y;
    cin >> X >> Y;
    
    ll tmp = X;
    ll ans = 0;
    ll key = 0;
    while ( X <= Y )
    {
        X *= 2;
        ans++;
    }
    cout << ans << endl;




}
