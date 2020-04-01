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
    
    ll ans = INF;
    for(ll i = 1; i <= sqrt(N)+1;i++)
    {
        if( N%i != 0 ) continue;
        else
        {
            //cout << i << " " << N/i << endl;
            ll tmp = max(to_string(N/i).size(),to_string(i).size());
            if( ans > tmp ) ans = tmp;
        }
    }
    cout << ans << endl;
}
