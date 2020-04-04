#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    int N,M;
    cin >> N >> M;

    vector<int> x(M);
    vector<int> y(M);

    rep(i,M) cin >> x[i] >> y[i];
    int ans = 0;

    rep(bit,(1<<N))
    {
        set<int> S;
        rep(i,N)
        {
            if (bit & (1<<i)) S.insert(i+1);
        }
       
        int num = 0;
        for( set<int>::iterator itr = S.begin(); itr != S.end(); itr++)
        {
            rep(j, M)
            {
                if( x[j] == *itr )
                {
                    if( S.find(y[j]) != S.end() ) num++;
                }
            }
        }
        if(num == S.size()-1) chmax(ans, num+1);
    }
    
    cout << ans << endl;
}
