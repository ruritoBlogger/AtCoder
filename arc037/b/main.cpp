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

int N,M;
vector<int> u;
vector<int> v;
set<int> used;

bool dfs( int key, int last_key )
{
    rep(i,M)
    {
        if( key == u[i] && v[i] != last_key )
        {
            if( used.find(v[i]) != used.end() ) return false;
            else
            {
                used.insert(v[i]);
                return dfs(v[i], key);
            }
        }
        else if( key == v[i] && u[i] != last_key )
        {
            if( used.find(u[i]) != used.end() ) return false;
            else
            {
                used.insert(u[i]);
                return dfs(u[i], key);
            }
        }
    }
    return true;
}

int main()
{
    cin >> N >> M;

    rep(i,M)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        u.push_back(tmp1);
        v.push_back(tmp2);
    }

    int ans = 0;

    rep(i,N)
    {
        if( used.find(i+1) != used.end() ) continue;
        used.insert(i+1);
        if( dfs( i+1, i+1 ) ) ans++;
        //cout << i+1 << " " << ans << endl;
    }
    cout << ans << endl;
}
