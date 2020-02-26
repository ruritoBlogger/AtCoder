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
    string tmp;
    cin >> tmp;
    vector<ll> s;
    rep(i,tmp.size()) s.push_back( tmp[i] - '0' );

    ll ans = 0;
    rep(i,s.size()) ans += pow(10,i) * s[s.size()-1-i];

    rep(bit,(1<<(s.size()-1)))
    {
        vector<int> S;
        rep(i,s.size()-1)
        {
            if (bit & (1<<i)) S.push_back(i);
        }

        ll old = 0;
        if( S.size() > 1 )
        {
            for (int i = 0; i < (int)S.size(); ++i)
            {
                for( int j = old; j < S[i]+1;j++)
                {
                    ans += pow(10,S[i]+1-j-1) * s[j];
                }
                //cout << S[i] << " " << ans << endl;
                old = S[i]+1;
            }
            for( int j = old; j < s.size(); j++)
            {
                ans += pow(10,s.size()-j-1) * s[j];
            }
            //cout << S[S.size()-1] << " " << ans << endl;
        }
        else
        {
            for (int i = 0; i < (int)S.size(); ++i)
            {
                for( int j = old; j < S[i]+1;j++)
                {
                    ans += pow(10,S[i]+1-j-1) * s[j];
                }
                for( int j = S[i]+1; j < s.size(); j++)
                {
                    ans += pow(10,s.size()-j-1) * s[j];
                }
                //cout << S[i] << " " << ans << endl;
                old = S[i];
            }
        }
        //cout << endl;
    }
    cout << ans << endl;


}
