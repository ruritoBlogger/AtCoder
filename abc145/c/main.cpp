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
    int N;
    cin >> N;

    vector<vector<int> >x(N,vector<int>(2));

    rep(i,N) cin >> x[i][0] >> x[i][1];

    vector<int> ary(N,1);
    rep(i,N) ary[i] += i;

    double total = 0;

    do
    {
        rep(i,N-1)
        {
            int key = ary[i]-1;
            int next_key = ary[i+1]-1;

            total += sqrt(pow(x[key][0]-x[next_key][0],2) + pow(x[key][1]-x[next_key][1],2));
        }
    }
    while(next_permutation(all(ary)));

    double num = 1.0;
    rep(i,N) num *= (i+1);
    
    put_double(total/num);
}
