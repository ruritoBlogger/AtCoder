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

    vector<int> a(M);
    rep(i,M) cin >> a[i];

    vector<int> dp(1,0);

    rep(i,N)
    {
        if( i == 0 )
        {
            bool first = true;
            rep(j,M)
            {
                if( i+1 == a[j] ) first = false;
            }
            if( first ) dp.push_back(1);
            else dp.push_back(0);
        }
        else if( i == 1 )
        {
            bool first = true;
            bool second = true;
            rep(j,M)
            {
                if( i+1 == a[j] ) first = false;
                if( i+2 == a[j] ) second = false;
            }
            if( first ) dp.push_back(1);
            else dp.push_back(0);
        }


        bool first = true;
        bool second = true;
        rep(j,M)

}
