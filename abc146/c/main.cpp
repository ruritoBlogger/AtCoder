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

ll A,B,X;

ll nibu( ll key, ll len )
{
    if( key >= 1e9 ) return 1e9;
    //cout << "key is " << key << " and len is " << len << endl;
    if( A * key + to_string(key).size() * B > X )
    {
        if( A * (key-1) + to_string(key-1).size() * B <= X )
        {
            return key-1;
        }
        else
        {
            ll tmp_len = len/2;
            if( tmp_len == 0 ) tmp_len = 1;
            return nibu( key - tmp_len, tmp_len );
        }
    }
    else
    {
        if( A * (key+1) + to_string(key+1).size() * B > X )
        {
            return key;
        }
        else
        {   
            ll tmp_len = len/2;
            if( tmp_len == 0 ) tmp_len = 1;
            return nibu( key + tmp_len, tmp_len );
        }
    }
}


int main()
{
    cin >> A >> B >> X;
    if( A + B > X ) cout << 0 << endl;
    else cout << nibu( 1e8 * 5, 1e8 * 5 ) << endl;
}
