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
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;

    vector<int> x(N);
    vector<int> y(M);

    rep(i,N) cin >> x[i];
    rep(i,M) cin >> y[i];
    sort(all(x));
    sort(all(y));
    
    REP(i,X+1,Y+1)
    {
        if(x[x.size()-1] < i && i <= y[0] ) 
        {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}
