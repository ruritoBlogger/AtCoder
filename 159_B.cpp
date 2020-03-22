#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

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
    bool flag = true;
    int n = s.size();

    rep(i, n)
    {
        if( s[i] != s[n-i-1] )flag = false;
    }
    
    rep(i, (n-1)/2)
    {
        //cout << i << " " << (n-1)/2-1-i << endl;
        if( s[i] != s[(n-1)/2-1-i] ) flag = false;
    }
    //cout << endl;
    REP(i, (n+3)/2-1, n)
    {
        //cout << i << " " << n - i -2 + (n+3)/2 << endl;
        if( s[i] != s[n - i -2 + (n+3)/2] ) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
