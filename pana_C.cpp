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
    ll a,b,c;
    cin >> a >> b >> c;

    if( a+b >= c )
    {
        cout << "Yes" << endl;
        return 0;
    }

    ll tmp = c - a - b;
    ll key = a*b;
    if( sqrt(key) > tmp )
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

}
