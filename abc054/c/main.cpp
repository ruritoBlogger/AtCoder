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

    vector<vector<int> >a(M, vector<int>(2));
    rep(i,M) cin >> a[i][0] >> a[i][1];

    vector<int> ary(N,1);
    rep(i,N) ary[i] += i;

    int ans = 0;
    
    do
    {
        if( ary[0] != 1 )break;

        // 順序が実行できるか試す
        bool isRight = true;
        rep(i,N-1)
        {
            bool flag = false;
            // パスの探索
            rep(j, M)
            {
                if( ary[i] == a[j][0] && ary[i+1] == a[j][1] ) flag=true;
                else if( ary[i] == a[j][1] && ary[i+1] == a[j][0] ) flag=true;
            }
            if( !flag )
            {
                isRight = false;
                break;
            }
        }
        if(isRight)ans++;
    }
    while(next_permutation(all(ary)));
    
    cout << ans << endl;
}
