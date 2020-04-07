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

#define MAX_V (ll)1e5+1

struct edge {
    ll to;
    ll cost;
};

// <最短距離, 頂点の番号>
#define P pair<ll, ll>

// Vは頂点数
ll V;
vector<edge> G[MAX_V];
vector<ll> d(MAX_V, INF_LL);

void dijkstra(ll s) {
    priority_queue<P, vector<P>, greater<P> > que;
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        ll v = p.second;
        if (d[v] < p.first) continue;

        for (ll i=0; i<G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}


int main()
{
    int N,M;
    ll T;
    cin >> N >> M >> T;

    V = N;

    vector<int> A(N);
    rep(i,N) cin >> A[i];

    vector<int> a(M);
    vector<int> b(M);
    vector<int> c(M);

    rep(i,M)
    {
        cin >> a[i] >> b[i] >> c[i];
        edge e = {b[i], c[i]};
        G[a[i]].push_back(e);
    }

    dijkstra(1);
    
    ll ans = 0;
    REP(i,2,N+1)
    {
        //cout << A[i] * max( (ll)0, T - (d[i]+d[1]) ) << endl;
        cout << A[i] << " " <<  d[i]+d[1] << endl;
    }
    
    cout << "D is ";
    rep(i,N+1) cout << d[i] << " ";
    cout << endl;
}
