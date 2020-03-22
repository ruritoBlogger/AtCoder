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
    vector<int> a(9);
    rep(i,9) cin >> a[i];
    int N;
    cin >> N;
    vector<int> b(N);
    rep(i,N) cin >> b[i];

    rep(i,N)
    {
        rep(j,9) if( b[i] == a[j] ) a[j] = 0;
        rep(j,3)
        {
            if( a[j * 3] + a[j * 3 + 1] + a[ j * 3 + 2] == 0 )
            {
                cout << "Yes" << endl;
                return 0;
            }
            if( a[j] + a[j+3] + a[j+6] == 0 )
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        if( a[0] + a[4] + a[8] == 0 || a[2] + a[4] + a[6] == 0 )
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
