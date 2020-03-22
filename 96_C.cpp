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
    int H,W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s[i];

    rep(i,H)
    {
        rep(j,W)
        {
            bool flag = false;
            if( s[i][j] != '#' ) continue;
            if( i != 0 )
            {
                if( s[i-1][j] == '#' ) flag = true;
            }
            if( i != H-1 )
            {
                if( s[i+1][j] == '#' ) flag = true;
            }
            if( j != 0 )
            {
                if( s[i][j-1] == '#' ) flag = true;
            }
            if( j != W-1 )
            {
                if( s[i][j+1] == '#' ) flag = true;
            }
            if( !flag )
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
