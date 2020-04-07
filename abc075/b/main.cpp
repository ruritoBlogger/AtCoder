#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

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
    int H,W;
    cin >> H >> W;

    vector<string> S(H);
    rep(i,H) cin >> S[i];

    rep(i,H)
    {
        rep(j,W)
        {
            if( S[i][j] == '.' )
            {
                int cnt = 0;
                REP(dx, -1, 2)
                {
                    REP(dy, -1, 2)
                    {
                        if( dx == dy && dx == 0 )continue;
                        if( i + dy < 0 || i+dy >= H ) continue;
                        if( j + dx < 0 || j+dx >= W ) continue;
                        if( S[i+dy][j+dx] == '#' )cnt++;
                    }
                }
                S[i][j] = to_string(cnt)[0];
            }
        }
    }
    rep(i,H) cout << S[i] << endl;
}
