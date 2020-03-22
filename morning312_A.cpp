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
    int N,M;
    cin >> N >> M;

    int left_max = 0;
    int right_min = N;

    rep(i,M)
    {
        int tmp_left, tmp_right;
        cin >> tmp_left >> tmp_right;
        left_max = max(left_max, tmp_left);
        right_min = min(right_min, tmp_right);
    }
    if( left_max > right_min ) cout << 0 << endl;
    else cout << right_min - left_max + 1 << endl;

}
