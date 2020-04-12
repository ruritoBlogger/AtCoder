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

#define MAX 510000
long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
 
// 二項係数計算
long long COM(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    int N;
    cin >> N;
    COMinit();

    vector<int> T(N);
    set<int> roop;
    multiset<int> key;
    rep(i,N)
    {
        cin >> T[i];
        roop.insert(T[i]);
        key.insert(T[i]);
    }
    sort(all(T));

    vector<ll> dp(N+1,0);
    rep(i,N)
    {
        chmax(dp[i+1], dp[i]+T[i]);
    }
    ll total = 0;
    rep(i,dp.size()) total += dp[i];
    
    ll cnt = 1;
    for(set<int>::iterator itr = roop.begin(); itr != roop.end(); itr++)
    {
        cnt %= MOD;
        int roop_key = key.count(*itr);
        while( roop_key > 1 )
        {
            cnt *= COM(roop_key, roop_key-1);
            roop_key--;
            cnt %= MOD;
        }
    }
    cout << total << endl;
    cout << cnt%MOD << endl;
}
