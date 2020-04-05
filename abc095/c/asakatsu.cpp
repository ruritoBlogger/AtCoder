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
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;

    ll ans = 0;

    if( X > Y )
    {
        if( A > C*2 ) ans = X * C * 2;
        else if( A+B > C*2 )
        {
            ans += min(X,Y) * C * 2;
            ans += (X-Y) * A;
        }
        else
        {
            ans += min(X,Y) * (A+B);
            ans += (X-Y) * A;
        }
    }
    else if( Y > X )
    {
        if( B > C*2 )
        {
            ans = Y * C * 2;
        }
        else if( A+B > C*2 )
        {
            ans += min(X,Y) * C * 2;
            ans += (Y-X) * B;
        }
        else
        {
            ans += min(X,Y) * (A+B);
            ans += (Y-X) * B;
        }
    }
    else
    {
        if( A+B > C*2 ) ans = X * C * 2;
        else ans = (A+B) * X;
    }
    cout << ans << endl;
}
