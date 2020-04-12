#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
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
    vector<vector<string> >S(H, vector<string>(W));
    rep(i,H)
    {
        rep(j,W)
        {
            cin >> S[i][j];
        }
    }

    rep(i,H)
    {
        rep(j,W)
        {
            if( S[i][j] == "snuke" )
            {
                cout << (char)('A'+j) << i+1 << endl;
                return 0;
            }
        }
    }
}
