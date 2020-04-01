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

int N;
string S;

int up_dfs( int key )
{
    if( key < 0 || key >= N ) return 0;
    set<char> left;
    set<char> right;

    rep(i,key) left.insert(S[i]);
    REP(i,key,N) right.insert(S[i]);

    int ans = 0;

    for(set<char>::iterator itr = right.begin(); itr != right.end(); itr++)
    {
        if( left.find(*itr) != left.end() )ans++;
    }
    chmax(ans, up_dfs(key+1));
    return ans;
}

int down_dfs( int key )
{
    if( key < 0 || key >= N ) return 0;
    set<char> left;
    set<char> right;

    rep(i,key) left.insert(S[i]);
    REP(i,key,N) right.insert(S[i]);

    int ans = 0;

    for(set<char>::iterator itr = left.begin(); itr != left.end(); itr++)
    {
        if( right.find(*itr) != right.end() )ans++;
    }
    chmax(ans, down_dfs(key-1));
    return ans;
}
    

int main()
{
    cin >> N >> S;
    cout << max( up_dfs(N/2+1), down_dfs(N/2)) << endl;
}
