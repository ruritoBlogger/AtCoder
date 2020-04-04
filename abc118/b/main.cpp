#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

void put_double(double obj){printf("%.12f\n",obj);};

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

    vector<set<int> > key;
    rep(i,N)
    {
        int K;
        set<int> tmp;
        cin >> K;
        rep(j, K)
        {
            int tmp2;
            cin >> tmp2;
            tmp.insert(tmp2);
        }
        key.push_back(tmp);
    }
    int ans = 0;
    rep(i,M)
    {
        bool flag = true;
        rep(j,key.size())
        {
            if( key[j].find( i+1 ) == key[j].end() ) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
