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
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];

    double ans = 0;
    rep(i,N)
    {
        ans += (double) 1/A[i];
    }
    cout << 1/ans << endl;

}
