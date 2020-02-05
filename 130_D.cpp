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
    ll N,K;
    cin >> N >> K;
    vector<ll> A(N);
    vector<ll> ary;
    ary.push_back(0);
    
    rep(i,N)
    {
        cin >> A[i];
        ary.push_back(ary[ary.size()-1]+A[i]);
    }

    ll ans = 0;

    ll left = 0;
    for( ll right = 1; right <= N; right++)
    {
        if( ary[right] - ary[left] >= K )
        {
            while( ary[right] - ary[left] >= K )
            {
                //cout << right << " " << left << endl;
                ans++;
                ans += (N - right);
                left++;
            }
        }
    }
    
    cout << ans << endl;
    
}
