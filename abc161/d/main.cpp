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
    int K;
    cin >> K;

    if( K < 10 )
    {
        cout << K << endl;
        return 0;
    }

    priority_queue<ll, vector<ll>,greater<ll> > q;
    REP(i, 1, 10) q.push(i);

    rep(i,K-1)
    {
        ll tmp = q.top();
        q.pop();
        int tmp_size = to_string(tmp).size();
        
        q.push(tmp*10+tmp%10);
        if( tmp%10 != 9 )  q.push(tmp*10+tmp%10+1);
        if( tmp%10 != 0 ) q.push(tmp*10+tmp%10-1);
    }
    cout << q.top() << endl;
}
