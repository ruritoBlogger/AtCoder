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

    vector<set<int> > s;
    rep(i,M)
    {
        int k;
        cin >> k;

        set<int> tmp;

        rep(j,k)
        {
            int tmp2;
            cin >> tmp2;
            tmp.insert(tmp2);
        }
            
        s.push_back(tmp);
    }

    vector<int> p(M);
    rep(i,M) cin >> p[i];
    ll ans = 0;

    rep(bit,(1<<N))
    {
        vector<int> S;
        rep(i,N)
        {
            if (bit & (1<<i)) S.push_back(i);
        }

        bool flag = true;
        
        // 電球を確認
        rep(i,M)
        {
            int matched = 0;
            // ついてるスイッチを試す
            for (int j = 0; j < (int)S.size(); ++j)
            {
                if( s[i].find( S[j]+1 ) != s[i].end() ) matched++;
            }
            //cout << "match is " << matched << endl;
            if( ((matched+2)%2 != p[i]) || ((matched+2)%2 != p[i]) )
            {
                //rep(k, S.size()) cout << S[k] << " ";
                //cout << endl;
                flag=false;
            }
        }
        if(flag)ans++;
        //cout << endl;
    }
    cout << ans << endl;
}
