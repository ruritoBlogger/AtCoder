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
    ll N;
    cin >> N;

    int six_key = 1;
    int nine_key = 1;
    priority_queue<ll> q;

    while(true)
    {
        if( pow(6, six_key) <= N )
        {
            q.push(pow(6, six_key));
            six_key++;
            
            if( pow(9, nine_key) <= N )
            {
                q.push(pow(9, nine_key));
                nine_key++;
            }
            else break;
        }
        else break;
    }

    vector<int> dp(N+1,INF);
    dp[0] = 0;

    rep(i,N+1)
    {
        priority_queue<ll> tmp = q;
        rep(j,q.size())
        {
            int tmp_N = i;    
            while( tmp_N - tmp.top() <= i )
            {
                dp[i] = min( dp[i], dp[i-tmp.top()] + 1);
                tmp_N -= tmp.top();
            }
            tmp.pop();
        }
    }
    cout << dp[N] << endl; 



    
}
