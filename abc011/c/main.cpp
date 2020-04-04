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
    int N,NG1,NG2,NG3;
    cin >> N >> NG1 >> NG2 >> NG3;

    int cnt = 0;

    while( N > 0 && cnt < 100 )
    {
        if( N == NG1 || N == NG2 || N == NG3 )
        {
            cout << "NO" << endl;
            return 0;
        }
        else if( N-3 != NG1 && N-3 != NG2 && N-3 != NG3 ) N -= 3;
        else if( N-2 != NG1 && N-2 != NG2 && N-2 != NG3 ) N -= 2;
        else if( N-1 != NG1 && N-1 != NG2 && N-1 != NG3 ) N -= 1;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
        cnt++;
    }
    if( N <= 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
}
