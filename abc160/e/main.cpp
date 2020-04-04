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
    int X,Y,A,B,C;
    cin >> X >> Y >> A >> B >> C;

    priority_queue<ll, vector<ll>, greater<ll> > p;
    priority_queue<ll, vector<ll>, greater<ll> > q;
    priority_queue<ll> r;

    vector<ll> tmp_p(A);
    vector<ll> tmp_q(B);
    
    rep(i,A) cin >> tmp_p[i];
        
    rep(i,B) cin >> tmp_q[i];
   
    rep(i,C)
    {
        ll tmp;
        cin >> tmp;
        r.push(tmp);
    }
    
    sort(all(tmp_p),greater<ll>());
    rep(i,X) p.push(tmp_p[i]);

    sort(all(tmp_q),greater<ll>());
    rep(i,Y) q.push(tmp_q[i]);

    rep(i,C)
    {
        if( r.top() < p.top() && r.top() < q.top() ) break;

        if( p.top() > q.top() )
        {
            q.pop();
            q.push(r.top());
            r.pop();
        }
        else
        {
            p.pop();
            p.push(r.top());
            r.pop();
        }
    }

    ll ans = 0;
    rep(i,X)
    {
        ans += p.top();
        p.pop();
    }
    
    rep(i,Y)
    {
        ans += q.top();
        q.pop();
    }
    
    cout << ans << endl;
}
