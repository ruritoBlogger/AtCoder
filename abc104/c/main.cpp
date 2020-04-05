#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
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
    int D,G;
    cin >> D >> G;

    vector<int> p(D);
    vector<ll> c(D);
    rep(i,D) cin >> p[i] >> c[i];
    ll ans = INF_LL;

    rep(bit,(1<<D))
    {
        vector<int> S;
        rep(i,D)
        {
            if (bit & (1<<i)) S.push_back(i);
        }

        // 全完する問題
        ll score = 0;
        ll accept_num = 0;
        for (int i = 0; i < (int)S.size(); ++i)
        {
            score += (S[i]+1)*100*p[S[i]];
            score += c[S[i]];
            accept_num += p[S[i]];
        }
        //cout << "ans is " << accept_num << " and score is " << score << endl;

        // 一部解く問題
        sort(all(S),greater<int>());
        for( int i = D-1; i > -1; i-- )
        {

            if( score >= G )break;

            bool used = false;
            rep(j,S.size())
            {
                if( i == S[j] )
                {
                    used = true;
                    break;
                }
            }
            if(used) continue;
            rep(j,p[i])
            {
                score += (i+1)*100;
                accept_num++;
                if( score >= G )break;
            }
        }
        /*
        cout << " S is ";
        rep(i,S.size()) cout << S[i] << " ";
        cout << "and ans is " << accept_num << endl;
        cout << endl;
        */
        if( score >= G ) chmin(ans, accept_num);
    }
    cout << ans << endl;
}
