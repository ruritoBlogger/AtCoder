#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    ll H;
    cin >> H;

    if( (H+2)%2 != 0 ) H--;
    
    ll key = 1;
    while( H >= 2 )
    {
        key *= 2;
        H /= 2;
    }
    cout << key * 2 - 1 << endl;

}
