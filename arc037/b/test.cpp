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
    int N,M;
    cin >> N >> M;

    UnionFind uf(N);
    vector<int> u(M);
    vector<int> v(M);

    vector<bool> key(N,false);

    rep(i,M)
    {
        cin >> u[i] >> v[i];
        u[i]--;
        v[i]--;
        if( uf.same(u[i], v[i]) )
        {
            key[u[i]] = true;
            key[v[i]] = true;
        }
        uf.unite(u[i], v[i]);
    }
    
    set<int> total, notTree;

    rep(i,N)
    {
        total.insert(uf.root(i));
        if(key[i]) notTree.insert(uf.root(i));
    }
    cout << total.size() - notTree.size() << endl;
}
