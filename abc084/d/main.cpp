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

vector<bool> prime_numbers()
{
    vector<bool>primeNum(100005, true);
    primeNum.at(0) = false; primeNum.at(1) = false;
 
    int N = 100001;
    REP(x, 2, floor(sqrt(N)))
    {
        if (primeNum.at(x) == false) continue;
     
        for(int y = x; y < N; y += x)
        {
            if (y == x)
            {
                primeNum.at(y) = true;
            }
            else 
            {
                primeNum.at(y) = false;
            }
        }
    }
    return primeNum;
}

int main()
{
    int Q;
    cin >> Q;

    vector<int> l(Q);
    vector<int> r(Q);
    rep(i,Q) cin >> l[i] >> r[i];
    vector<bool> isPrime = prime_numbers();

    vector<ll> dp(1, 0);
    rep(i, isPrime.size())
    {
        if( isPrime[i] && isPrime[(i+1)/2] ) dp.push_back(dp[dp.size()-1]+1);
        else dp.push_back(dp[dp.size()-1]);
    }
    rep(i, Q)
    {
        cout << dp[r[i]+1] - dp[l[i]] << endl;
    }
}
