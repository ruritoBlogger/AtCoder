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
    int A,B;
    cin >> A >> B;

    if(A > 12) cout << B << endl;
    else if( A > 5 ) cout << B/2 << endl;
    else cout << 0 << endl;
}
