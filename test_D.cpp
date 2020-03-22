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
    vector<int> h(N);
    rep(i,N) cin >> h[i];

    int left = 0;
    int right = 0;
    ll ans = 0;
    while(true)
    {
        bool flag = true;
        rep(i,N)
        {
            if( h[right] != 0 )
            {
                flag = false;
                right++;
            }
            else
            {
                for( int j = left ; j < right ;j++) h[j]--;
                if( left != right ) ans++;
                left = right+1;
                right = left;
            }
            //cout << h[i] << " ";
        }
        //cout << endl;
        if(flag)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            for( int j = left ; j < right ;j++) h[j]--;
            if( left != right ) ans++;
            left = 0;
            right = left;
        }
    }
}
