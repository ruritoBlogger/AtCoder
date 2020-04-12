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
    ll A,B,C;
    cin >> A >> B >> C;

    ll total = A+B+C;

    ll ans = 0;
    while( A%2==0 && B%2==0 && C%2==0 )
    {
        ll tmp_A = (B+C)/2;
        if( (B+C)%2 != 0 ) tmp_A++;

        ll tmp_B = (A+C)/2;
        if( (A+C)%2 != 0 ) tmp_B++;

        ll tmp_C = (A+B)/2;
        if( (A+B)%2 != 0 ) tmp_C++;

        set<ll> check_before;
        set<ll> check_after;

        check_before.insert(A);
        check_before.insert(B);
        check_before.insert(C);

        check_after.insert(tmp_A);
        check_after.insert(tmp_B);
        check_after.insert(tmp_C);

        if( check_before == check_after )
        {
            cout << -1 << endl;
            return 0;
        }

        A = tmp_A;
        B = tmp_B;
        C = tmp_C;
        ans++;
    }
    cout << ans << endl;
}
