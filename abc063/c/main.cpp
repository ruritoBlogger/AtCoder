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
    int N;
    cin >> N;
    vector<int> s(N);
    rep(i,N) cin >> s[i];

    sort(all(s));
    ll total = 0;
    rep(i,N) total += s[i];

    vector<int> ary(N,0);
    rep(i,N) ary[i] = i;

    ll ans = 0;

    if( total%10 != 0 )
    {
        cout << total << endl;
        return 0;
    }
    
    rep(i,s.size())
    {
        if( s[i]%10 != 0 )
        {
            cout << total-s[i] << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
