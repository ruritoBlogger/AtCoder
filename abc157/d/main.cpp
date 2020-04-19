#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)(n); i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n); i >= a; i--)
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

struct UnionFind {
    // 親ノードの番号を持つメンバ変数
    // ただし自分が親の時は-x(xは自身を含めた子ノードの数)
    vector<int> par;
    
    //　コンストラクタでの初期化1(初期値-1を持つn次元配列)
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    // 与えられたノードの親ノードの番号を返すメンバ関数
    int root(int x) {
        // もしも親ノードが0以下なら、それは初期値なので自身が親
        if (par[x] < 0) return x;
        // 親ノードを再帰的に一番上までたどって返す
        // 単にroot(par[x])ではなく代入してるのは、根に直接張り直すため
        else return par[x] = root(par[x]);
    }
    
    // もし根が同じかどうかの判定
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    
    // ２つの根をマージする処理
    bool unite(int x, int y) {
        // 根をたどって、同じなら何もしない
        x = root(x); y = root(y);
        if (x == y) return false;
 
        // xもyも今は親ノードなので、子の数を比べる
        if (par[x] > par[y]) swap(x, y); // merge technique
 
        // 小さい方を親ノードにする
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    // 親ノードに入っている番号*-1 = この木のノード数を返す。
    int size(int x) {
        return -par[root(x)];
    }
};

int main()
{
    int N,M,K;
    cin >> N >> M >> K;
    UnionFind friends(N);
    vector<set<int> > direct(N);
    
    rep(i,M)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        friends.unite(a,b);
        direct[a].insert(b);
        direct[b].insert(a);
    }
    rep(i,K)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        if( !friends.same(a,b) ) continue;
        direct[a].insert(b);
        direct[b].insert(a);
    }
    rep(i,N)
    {
        cout << friends.size(i) - direct[i].size()-1;
        if(i+1 != N ) cout << " ";
    }
    cout << endl;
    //rep(i,N) cout << ans[i] << " " << direct_friends[i] << endl;
    //rep(i,N) cout << friends.size(i) << endl;
}
