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
    int N,M;
    cin >> N >> M;
    vector<int> s(M);
    vector<int> c(M);
    vector<int> ans(N,-1);

    rep(i,M)
    {
        cin >> s[i] >> c[i];
        s[i]--;
    }

    rep(i,M)
    {
        if( ans[s[i]] == c[i] || ans[s[i]] == -1 ) ans[s[i]] = c[i];
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }

    if( N == 1 && M == 0 )
    {
        cout << 0 << endl;
        return 0;
    }
    else if( ans[0] == 0 )
    {
        if( N==1 ) cout << 0 << endl;
        else cout << -1 << endl;
        return 0;
    }
    else if( ans[0] == -1 ) ans[0] = 1;


    rep(i,N)
    {
        if( ans[i] != -1 ) cout << ans[i];
        else cout << 0;
    }
    cout << endl;
}
