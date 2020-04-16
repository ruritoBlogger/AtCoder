#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)(n); i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n); i >= a; i--)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

void put_double(double obj){printf("%.12f\n",obj);};

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

    vector<vector<char> > ans(H,vector<char>(W,'0'));

    rep(i,H)
    {
        rep(j,W)
        {
            if( s[i][j] == '#' )
            {
                if( i > 0 )
                {
                    if( ans[i-1][j] != '#' ) ans[i-1][j] = (char)(ans[i-1][j]+1);
                    if( j+1 < W && ans[i-1][j+1] != '#' ) ans[i-1][j+1] = (char)(ans[i-1][j+1]+1);
                    if( j > 0 && ans[i-1][j-1] != '#' ) ans[i-1][j-1] = (char)(ans[i-1][j-1]+1);
                }
                if( i+1 < H )
                {
                    if( ans[i+1][j] != '#' ) ans[i+1][j] = (char)(ans[i+1][j]+1);
                    if( j+1 < W && ans[i+1][j+1] != '#' ) ans[i+1][j+1] = (char)(ans[i+1][j+1]+1);
                    if( j > 0 && ans[i+1][j-1] != '#' ) ans[i+1][j-1] = (char)(ans[i+1][j-1]+1);
                }
                ans[i][j] = '#';

                if( j > 0 )
                {
                    if( ans[i][j-1] != '#' ) ans[i][j-1] = (char)(ans[i][j-1]+1);
                }
                if( j+1 < W )
                {
                    if( ans[i][j+1] != '#' ) ans[i][j+1] = (char)(ans[i][j+1]+1);
                }
            }
        }
    }
    rep(i,H)
    {
        rep(j,W) cout << ans[i][j];
        cout << endl;
    }
}
