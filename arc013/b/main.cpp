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
    int C;
    cin >> C;
    vector<vector<ll> > key;

    rep(i,C)
    {
        vector<ll> tmp(3);
        cin >> tmp[0] >> tmp[1] >> tmp[2];
        sort(all(tmp));
        key.push_back(tmp);
    }

    ll tate= 0, yoko=0, high=0;
    rep(i,C)
    {
        chmax(tate, key[i][0]);
        chmax(yoko, key[i][1]);
        chmax(high, key[i][2]);
    }
    cout << tate*yoko*high << endl;

}
