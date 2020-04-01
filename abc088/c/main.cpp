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
    vector<vector<int> > c(3, vector<int>(3));
    rep(i,3)
    {
        rep(j,3)
        {
            cin >> c[i][j];
        }
    }

    rep(i,2)
    {
        int key = c[i][0] - c[i+1][0];
        rep(j,3)
        {
            if( key != c[i][j] - c[i+1][j] )
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
