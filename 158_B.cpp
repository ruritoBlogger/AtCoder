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
    ll N,A,B;
    cin >> N >> A >> B;

    ll tmp = N/(A+B);
    if( B == 0 ) cout << N << endl;
    else if( A == 0 ) cout << 0 << endl;
    else if( N%(A+B) <= A )
    {
        cout << tmp * A + N%(A+B) << endl;
    }
    else cout << tmp * A + A << endl;

}
