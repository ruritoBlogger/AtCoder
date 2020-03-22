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
    double N;
    cin >> N;
    
    int num = 0;
    rep(i,N)
    {
        if( (i+3)%2 != 0 )num++;
    }
    cout << (double)num/N << endl;

}
