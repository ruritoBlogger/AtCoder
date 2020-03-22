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

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}
ll nCr(int n,int r){
    if(r==1)return n;
    if(r==2)return n*(n-1)/2;
    return n*(n-1)*(n-2)/6;
}
int main()
{
    int N,M;
    cin >> N >> M;
    cout << nCr(N,2) + nCr(M,2)<< endl;
}
