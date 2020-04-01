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
    double A,B,T;
    cin >> A >> B >> T;

    T += 0.5;
    int time = A;
    int ans = 0;
    while( time <= T )
    {
        time += A;
        ans += B;
    }
    cout << ans << endl;
}
