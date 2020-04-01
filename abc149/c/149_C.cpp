#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

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
    int X;
    cin >> X;

    while(true)
    {
        bool flag = true;
        rep(i,sqrt(X)-2)
        {
            if( X%(i+2) == 0 )
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << X << endl;
            return 0;
        }
        X++;
    }
}
