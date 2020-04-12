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
    int N,K;
    cin >> N >> K;
    string s;
    cin >> s;

    // (ゼロのブロックの数, 長さ)
    vector<pair<ll, ll> >dp;

    pair<ll, ll> last = make_pair(-1, 0);

    rep(i,N)
    {
        if( last.first == -1 )
        {
            last.first = s[i]-'0';
        }
        else if( s[i]-'0' != last.first )
        {
            dp.push_back(last); 
            last.first = s[i]-'0';
        }
        last.second++;
    }
    dp.push_back(last);

    ll ans = 1;

    rep(i,dp.size()-K)
    {
        ll tmp_ans = 0;
        if( dp[i].first == 0 )
        {
            int key = dp.size()-1;
            if( i+1+(2)*(K-1) < dp.size() ) key = i+1+(2)*(K-1);
            
            if( i == 0 ) tmp_ans = dp[key].second;
            else tmp_ans = dp[key].second - dp[i-1].second;
        }
        else if( dp[i].first == 1 )
        {
            int key = dp.size()-1;
            if( i+K*2 < dp.size() ) key = i+K*2;
            
            if( i == 0 ) tmp_ans = dp[key].second;
            else tmp_ans = dp[key].second - dp[i-1].second;
        }
        chmax(ans, tmp_ans);
    }
    cout << ans << endl;

    //rep(i,dp.size()) cout << dp[i].first << " " << dp[i].second << endl;
}
