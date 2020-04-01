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
    string N;
    cin >> N;

    ll ans = 1;
    bool changed = false;
    bool key = false;
    rep(i,N.size())
    {
        

        if( N[i] == '0' || N[i] == '1' || N[i] == '2' || N[i] == '3' || N[i] == '4' || N[i] == '5')
        {
            if( N[i] == '0' ) ans += 0;
            else if( N[i] == '1' ) ans += 1;
            else if( N[i] == '2' ) ans += 2;
            else if( N[i] == '3' ) ans += 3;
            else if( N[i] == '4' ) ans += 4;
            else if( N[i] == '5' ) ans += 5;
        }
        else
        {
            if( N[i] == '6' ) ans += 4;
            else if( N[i] == '7' ) ans += 3;
            else if( N[i] == '8' ) ans += 2;
            else if( N[i] == '9' ) ans += 1;
        }
        cout << ans << " " << N[i] << endl;
    }
    
    //if( N[0]
    cout << ans << endl;
}
