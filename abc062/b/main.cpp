#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int H,W;
    cin >> H >> W;
    vector<string> s(H);
    rep(i,H) cin >> s[i];

    rep(i,W+2) cout << '#';
    cout << endl;
    rep(i,H)
    {
        cout << '#' << s[i] << '#' << endl;
    }
    rep(i,W+2) cout << '#';
    cout << endl;


}
