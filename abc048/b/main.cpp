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
    ll a,b,x;
    cin >> a >> b >> x;
 
    if( a%x != 0 ) a = (a/x+1)*x ;
    if( b%x != 0 ) b = (b/x)*x;
    
    if( a > b )
    {
        cout << 0 << endl;
        return 0;
    }
    ll ans = (b-a)/x;
    //最初
    if( a%x == 0 || b%x ==0 ) ans++;
    
    cout << ans << endl;
}
