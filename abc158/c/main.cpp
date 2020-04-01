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
    int A,B;
    cin >> A >> B;
    for( int i = 1; i < 10001;i++)
    {
        if( (int)(i*0.08) == A && (int)(i *0.1) == B )
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;


}
