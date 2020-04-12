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


int main()
{
    int H,W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s[i];

    int white_num = 0;
    rep(i,H)
    {
        rep(j,W)
        {
            if( s[i][j] == '.' ) white_num++;
        }
    }

    vector<vector<int> > dist(H, vector<int>(W, -1));
    queue<pair<int, int> > que;
    dist[0][0] = 0;
    que.push(make_pair(0,0));

    while( !que.empty() )
    {
        pair<int, int> point = que.front();
        que.pop();

        //上
        if( point.first > 0 && s[point.first-1][point.second] == '.' && dist[point.first-1][point.second] == -1 )
        {
            dist[point.first-1][point.second] = dist[point.first][point.second]+1;
            que.push(make_pair(point.first-1, point.second));
        }
        //下
        if( point.first+1 < H && s[point.first+1][point.second] == '.' && dist[point.first+1][point.second] == -1 )
        {
            dist[point.first+1][point.second] = dist[point.first][point.second]+1;
            que.push(make_pair(point.first+1, point.second));
        }
        //右
        if( point.second+1 < W && s[point.first][point.second+1] == '.' && dist[point.first][point.second+1] == -1 )
        {
            dist[point.first][point.second+1] = dist[point.first][point.second]+1;
            que.push(make_pair(point.first, point.second+1));
        }
        //左
        if( point.second > 0 && s[point.first][point.second-1] == '.' && dist[point.first][point.second-1] == -1 )
        {
            dist[point.first][point.second-1] = dist[point.first][point.second]+1;
            que.push(make_pair(point.first, point.second-1));
        }
    }
    if( dist[H-1][W-1] != -1 ) cout << white_num - dist[H-1][W-1] -1 << endl;
    else cout << -1 << endl;
}
