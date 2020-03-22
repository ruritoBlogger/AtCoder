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
        rep(j,s[i].size())
        {
            if( s[i][j] != '#' )continue;
            if( i != 0 && i + 1 != H)
            {
                if( j != 0 && j + 1 != s[i].size())
                {
                    if( s[i][j-1] != '#' && s[i][j+1] != '#' && s[i-1][j] != '#' && s[i+1][j] != '#' )
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j != 0 )
                {
                    if( s[i][j-1] != '#' && s[i-1][j] != '#' && s[i+1][j] != '#' )
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j+1 != s[i].size() )
                {
                    if( s[i][j+1] != '#' && s[i-1][j] != '#' && s[i+1][j] != '#' )
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            else if( i != 0 )
            {
                if( j != 0 && j + 1 != s[i].size())
                {
                    if( s[i][j-1] != '#' && s[i][j+1] != '#' && s[i-1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j != 0 )
                {
                    if( s[i][j-1] != '#' && s[i-1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j+1 != s[i].size() )
                {
                    if( s[i][j+1] != '#' && s[i-1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            else if( i+1 != H )
            {
                if( j != 0 && j + 1 != s[i].size())
                {
                    if( s[i][j-1] != '#' && s[i][j+1] != '#' && s[i+1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j != 0 )
                {
                    if( s[i][j-1] != '#' && s[i+1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else if( j+1 != s[i].size() )
                {
                    if( s[i][j+1] != '#' && s[i+1][j] != '#')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}
