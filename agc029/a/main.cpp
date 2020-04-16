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
    string s;
    cin >> s;
    
    reverse(all(s));
    ll ans = 0;

    ll white_num = 0;
    
    rep(i, s.size())
    {
        if( s[i]=='W') white_num++;
        else if( s[i] == 'B' )
        {
            if( white_num > 0 )
            {
                ans += white_num;
            }
            else white_num = 0;
        }
        //cout << ans << endl;
        //cout << s << endl;
    }
    cout << ans << endl;
}
