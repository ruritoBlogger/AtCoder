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

    vector<int> A(N);
    multiset<int> key;
    set<int> roop;
    rep(i,N)
    {
        cin >> A[i];
        key.insert(A[i]);
        roop.insert(A[i]);
    }
    
    int large = 0;
    for(set<int>::iterator itr = roop.begin(); itr != roop.end(); itr++)
    {
        if( large < key.count(*itr) ) large = key.count(*itr);
    }

    if( large > N/2 )
    {
        rep(i,N)
        {
            if( key.count(A[i]) == large )
            {
                cout << A[i] << endl;
                return 0;
            }
        }
    }
    else cout << '?' << endl;
}
