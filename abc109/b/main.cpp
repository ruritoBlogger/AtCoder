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
    int N;
    cin >> N;

    vector<string> W(N);
    rep(i,N) cin >> W[i];

    set<string> used;
    used.insert(W[0]);
    char last_ward = W[0][W[0].size()-1];

    REP(i, 1, N)
    {
        if( last_ward != W[i][0] )
        {
            cout << "No" << endl;
            return 0;
        }
        else if( used.find(W[i]) != used.end() )
        {
            cout << "No" << endl;
            return 0;
        }

        last_ward = W[i][W[i].size()-1];
        used.insert(W[i]);
    }
    cout << "Yes" << endl;

}
