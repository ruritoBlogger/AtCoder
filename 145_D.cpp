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

ll X,Y;
int main()
{
    cin >> X >> Y;
    ll waru = 1e9+7;
    vector<vector<ll> >dp;
    vector<ll> TMP(1e6,0);
    dp.push_back(TMP);
    dp.push_back(TMP);
    vector<ll> tmp(3,0);
    dp.push_back(tmp);
    dp[2][2] = 1;

    for(ll y = 2;y <= Y+2;y++)
    {
        dp.push_back(tmp);
        for(ll x = 2;x <= X+2;x++)
        {
            dp[y].push_back(dp[y-1][x-1] + dp[y-2][x]);
            //cout << " x is " << x << " and y is " << y << "y-1,x-2 is " << dp[y-1][x-2] << endl;
        }
   
    /*
        rep(i,Y+y-2)
        {
            rep(j,X+2)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    */

    }

    /*
    rep(i,Y+3)
    {
        rep(j,X+3)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */
    cout << dp[X+2][Y+2]%waru << endl;

}
