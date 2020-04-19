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

#define MAX_V (ll)500

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
    cin >> N >> M;

    rep(i,M)
    {
        int a,b,t;
        cin >> a >> b >> t;
        a--;
        b--;
        edge e = {a, t};
        G[b].push_back(e);
        e = {b, t};
        G[a].push_back(e);
    }
    ll dist = INF_LL;
    rep(i,N)
    {
        dijkstra(i);
        ll tmp_dist = 0;
        rep(j, N)
        {
            chmax(tmp_dist, d[j]);
        }
        chmin(dist, tmp_dist);
        d = vector<ll>(MAX_V, INF_LL);
    }
    cout << dist << endl;
}
