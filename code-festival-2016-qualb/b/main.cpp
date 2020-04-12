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
    ll N,A,B;
    cin >> N >> A >> B;

    string s;
    cin >> s;

    ll total = 0;
    ll total_b = 0;

    rep(i,s.size())
    {
        if( s[i] == 'a' && total < A+B )
        {
            cout << "Yes" << endl;
            total++;
        }
        else if( s[i] == 'b' && total < A+B && total_b < B )
        {
            cout << "Yes" << endl;
            total++;
            total_b++;
        }
        else cout << "No" << endl;
    }
}
