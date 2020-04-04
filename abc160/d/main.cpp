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
    int N,X,Y;
    cin >> N >> X >> Y;
    X--;
    Y--;

    vector<ll> ans(N-1,0);
    queue<int> bfs;
    queue<int> tmp;

    rep(i,N-1)
    {
        // start: i
        swap(bfs, tmp);
        bfs.push(i);

        vector<int> dist(N, -1);
        dist[i] = 0;

        while(!bfs.empty())
        {
            int v = bfs.front();
            bfs.pop();
                
            // 左側
            if( v-1 > -1 && dist[v-1] == -1)
            {
                dist[v-1] = dist[v]+1;
                bfs.push(v-1);
            }
            // 右側
            if( v+1 < N && dist[v+1] == -1 )
            {
                dist[v+1] = dist[v] + 1;
                bfs.push(v+1);
            }
            // 今の場所がXの時
            if( v == X && dist[Y] == -1 )
            {
                dist[Y] = dist[v]+1;
                bfs.push(Y);
            }
            // 今の場所がYの時
            if( v == Y && dist[X] == -1 )
            {
                dist[X] = dist[v]+1;
                bfs.push(X);
            }
        }
        REP(j, i,dist.size())
        {
            if( dist[j] > 0 ) ans[dist[j]-1]++;
        }
    }
    rep(i,ans.size()) cout << ans[i] << endl;
}
