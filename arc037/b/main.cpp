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

class UnionFind {
public:
    // 親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;
 
    UnionFind(int N) {
        Parent = vector<int>(N, -1);
    }
 
    // Aがどのグループに属しているか調べる
    int root(int A) {
        if (Parent[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }
 
    // 自分のいるグループの頂点数を調べる
    int size(int A) {
        return -Parent[root(A)];//親をとってきたい]
    }
 
    // AとBをくっ付ける
    bool unite(int A, int B) {
        // AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
        A = root(A);
        B = root(B);
        if (A == B) {
            //すでにくっついてるからくっ付けない
            return false;
        }
 
        // 大きい方(A)に小さいほう(B)をくっ付ける
        // 大小が逆だったらひっくり返す
        if (size(A) < size(B)) {
            swap(A, B);
        }
 
        // Aのサイズを更新する
        Parent[A] += Parent[B];
        // Bの親をAに変更する
        Parent[B] = A;
 
        return true;
    }

    // 2つの頂点が同じ木に属しているか
    bool same(int a, int b) {
        int ra = root(a);
        int rb = root(b);
        return ra == rb;
    }
};

int main()
{
    int N,M;
    cin >> N >> M;

    UnionFind UF(N);

    vector<bool> notUsed(N,false);

    rep(i,M)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        if( UF.same(u, v) )
        {
            notUsed[u] = true;
            notUsed[v] = true;
        }
        UF.unite(u, v);
    }
    
    set<int> total, notTree;
    rep(i,N)
    {
        total.insert(UF.root(i));
        if( notUsed[i] ) notTree.insert(UF.root(i));
    }
    cout << total.size() - notTree.size() << endl;
}
