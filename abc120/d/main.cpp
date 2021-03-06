#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n)-1; i >= a; i--)
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
ll N, M;
    cin >> N >> M;
 
    vector<ll> A(M);
    vector<ll> B(M);
 
    rep(i, M){
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }
 
    vector<ll> ans;
    ll count = N*(N-1)/2;
 
    UnionFind uf(N);
 
    // 辺を1つずつ足していく
    rrep(i, M){
 
        // 現在の非連結ペアの数を格納
        ans.push_back(count);
 
        // 同じ木に属すなら処理終了
        if(uf.same(A[i], B[i])) continue;
 
        // 新たにくっついたときに連結できる様になるペアの数を数える
        ll pairs = uf.size(A[i]) * uf.size(B[i]);
 
        // 答えからペアの数を引く
        count -= pairs;
 
        //最後にマージ処理をする
        uf.unite(A[i], B[i]);
    }
 
    rrep(i, M){
        cout << ans[i] << endl;
    }
 
    return 0;
} 
