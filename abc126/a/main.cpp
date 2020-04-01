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
    int N,K;
    cin >> N >> K;

    string s;
    cin >> s;

    if( s[K-1] == 'A' ) s[K-1] = 'a';
    if( s[K-1] == 'B' ) s[K-1] = 'b';
    if( s[K-1] == 'C' ) s[K-1] = 'c';
    cout << s << endl;

}
