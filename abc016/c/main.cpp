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

    vector<int> A(M);
    vector<int> B(M);
    rep(i,M) cin >> A[i] >> B[i];
    //cout << endl;

    rep(i,N)
    {
        ll ans = 0;
        set<int> friends;
        // 友達抜き出す
        rep(j,M)
        {
            if( A[j]-1 == i ) friends.insert(B[j]);
            if( B[j]-1 == i ) friends.insert(A[j]);
        }
        /*
        for( set<int>::iterator itr = friends.begin(); itr != friends.end(); itr++ ) cout << *itr << " ";
        cout << endl;
        */

        set<int> maybe_friends;
        
        for( set<int>::iterator itr = friends.begin(); itr != friends.end(); itr++ )
        {
            rep(j,M)
            {
                if( A[j] == *itr && B[j]-1 != i && friends.find(B[j]) == friends.end() && maybe_friends.find(B[j]) == maybe_friends.end() )
                {
                    //cout << A[j] << " " << B[j] << endl;
                    ans++;
                    maybe_friends.insert(B[j]);
                }
                if( B[j] == *itr && A[j]-1 != i && friends.find(A[j]) == friends.end() && maybe_friends.find(A[j]) == maybe_friends.end())
                {
                    //cout << A[j] << " " << B[j] << endl;
                    ans++;
                    maybe_friends.insert(A[j]);
                }
            }
        }
        cout << ans << endl;
        //cout << " and ans is " <<  ans << endl;
        //cout << endl;
    }
}
