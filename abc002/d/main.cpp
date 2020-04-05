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
            if (bit & (1<<i)) S.insert(i);
        }

        bool isCreateFriend = true;

        for(set<int>::iterator itr = S.begin(); itr != S.end(); itr++)
        {
            // *itrの友人を格納していく  
            set<int> maybe_friend;
            rep(i, M)
            {
                if( *itr == x[i]-1 && S.find(y[i]-1) != S.end() ) maybe_friend.insert(y[i]-1);
                if( *itr == y[i]-1 && S.find(x[i]-1) != S.end() ) maybe_friend.insert(x[i]-1);
            }
            
            if( S.size()-1 != maybe_friend.size() )
            {
                isCreateFriend = false;
                break;
            }
            else
            {
                for(set<int>::iterator maybe_itr = maybe_friend.begin(); maybe_itr != maybe_friend.end(); maybe_itr++)
                {
                    if( S.find(*maybe_itr) == S.end() )
                    {
                        isCreateFriend = false;
                        break;
                    }
                }
                if(!isCreateFriend) break;
            }
        }
        /*
        if( isCreateFriend )
        {
            for(set<int>::iterator itr = S.begin(); itr != S.end(); itr++) cout << *itr << " ";
            cout << endl;
        }
        */

        if( isCreateFriend ) chmax(ans, (int)S.size());
    }
    cout << ans << endl;
}
