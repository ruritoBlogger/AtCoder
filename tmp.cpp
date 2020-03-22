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

ll nibu( ll key, ll length )
{
    // 終了条件
    if( key >= 1e9 ) return 1e9;

    //cout << key << " " << length << endl;
    
    if( key * A + to_string(key).size() * B == X ) return key;
    else if( key * A + to_string(key).size() * B > X )
    {
        // 終了条件
        if( (key-1)*A + to_string(key-1).size() * B < X )
        {
            return key-1;
        }
        else
        {
            ll next_len = max((ll)1, length/2);
            return nibu( key - next_len, next_len );
        }
    }
    else
    {
        // 終了条件
        if( (key+1)*A + to_string(key+1).size() * B > X )
        {
            return key;
        }
        else
        {
            ll next_len = max((ll)1, length/2);
            return nibu( key + next_len, next_len );
        }
    }
}

int main()
{
    cin >> A >> B >> X;
    if( A + B > X ) cout << 0 << endl;
    else cout << nibu(5 * 1e8, 5 * 1e8) << endl;
}
