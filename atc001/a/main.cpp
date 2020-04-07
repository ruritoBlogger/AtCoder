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
    int H,W;
    cin >> H >> W;
    
    vector<string> c(H);

    rep(i,H) cin >> c[i];

    rep(i,H)
    {
        rep(j,c[i].size())
        {
            if( c[i][j] == 's' )
            {
                vector<vector<int> > dist(H, vector<int>(W, -1));
                queue<pair<int, int> > que;

                dist[i][j] = 0;
                que.push(make_pair(i,j));

                while( !que.empty() )
                {
                    pair<int, int> point = que.front();
                    que.pop();
                    if( c[point.first][point.second] == 'g' )
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }

                    // 上
                    if( point.first > 0 && dist[point.first-1][point.second] == -1 && c[point.first-1][point.second] != '#' )
                    {
                        dist[point.first-1][point.second] = dist[point.first][point.second]+1;
                        que.push(make_pair(point.first-1, point.second));
                    }
                    // 下
                    if( point.first+1 < H && dist[point.first+1][point.second] == -1 && c[point.first+1][point.second] != '#')
                    {
                        dist[point.first+1][point.second] = dist[point.first][point.second]+1;
                        que.push(make_pair(point.first+1, point.second));
                    }
                    // 右
                    if( point.second+1 < W && dist[point.first][point.second+1] == -1 && c[point.first][point.second+1] != '#')
                    {
                        dist[point.first][point.second+1] = dist[point.first][point.second]+1;
                        que.push(make_pair(point.first, point.second+1));
                    }
                    // 右
                    if( point.second > 0 && dist[point.first][point.second-1] == -1 && c[point.first][point.second-1] != '#')
                    {
                        dist[point.first][point.second-1] = dist[point.first][point.second]+1;
                        que.push(make_pair(point.first, point.second-1));
                    }
                }
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
