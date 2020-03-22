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
    string s,t;
    cin >> s >> t;

    int ans = 0;
    if( s[0] == t[0] ) ans++;
    if( s[1] == t[1] ) ans++;
    if( s[2] == t[2] ) ans++;
    cout << ans << endl;


}
