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
    string S,T;
    cin >> S >> T;
    int A,B;
    cin >> A >> B;
    string U;
    cin >> U;

    if( S == U ) cout << A-1 << " " << B << endl;
    else if( U == T ) cout << A << " " << B-1 << endl;
    else cout << A << " " << B << endl;
}
