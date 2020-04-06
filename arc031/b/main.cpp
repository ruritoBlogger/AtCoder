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
    vector<string> A(10);
    rep(i,10) cin >> A[i];

    int island_size = 0;
    rep(i,10)
    {
        rep(j,A[i].size())
        {
            if( A[i][j] == 'o' ) island_size++;
        }
    }

    // 全探索していく
    // (key_high, key_width)を埋め立てる
    rep(key_high, 10)
    {
        rep(key_width, 10)
        {
            rep(i,10)
            {
                rep(j,A[i].size())
                {
                    if( A[i][j] == 'o' || ( i == key_high && j == key_width ) )
                    {
                        // ここからbfs
                        vector<vector<int> > dist(10, vector<int>(10, -1));
                        queue<pair<int, int> > que;
                        que.push(make_pair(i, j));
                        dist[i][j] = 0;

                        int island_tmp_size = 1;

                        while( !que.empty() )
                        {
                            pair<int, int> point = que.front();
                            que.pop();

                            // 上
                            if( point.first > 0 && A[point.first-1][point.second] == 'o' && dist[point.first-1][point.second] == -1 )
                            {
                                dist[point.first-1][point.second] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first-1, point.second ) );
                                island_tmp_size++;
                            }
                            else if( point.first-1 == key_high && point.second == key_width && dist[point.first-1][point.second] == -1)
                            {
                                dist[point.first-1][point.second] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first-1, point.second ) );
                                island_tmp_size++;
                            }
                            
                            // 下
                            if( point.first+1 < 10 && A[point.first+1][point.second] == 'o' && dist[point.first+1][point.second] == -1)
                            {
                                dist[point.first+1][point.second] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first+1, point.second ) );
                                island_tmp_size++;
                            }
                            else if( point.first+1 == key_high && point.second == key_width && dist[point.first+1][point.second] == -1)
                            {
                                dist[point.first+1][point.second] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first+1, point.second ) );
                                island_tmp_size++;
                            }

                            // 右
                            if( point.second+1 < 10 && A[point.first][point.second+1] == 'o' && dist[point.first][point.second+1] == -1)
                            {
                                dist[point.first][point.second+1] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first, point.second+1 ) );
                                island_tmp_size++;
                            }
                            else if( point.first == key_high && point.second+1 == key_width && dist[point.first][point.second+1] == -1)
                            {
                                dist[point.first][point.second+1] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first, point.second+1 ) );
                                island_tmp_size++;
                            }

                            // 左
                            if( point.second > 0 && A[point.first][point.second-1] == 'o' && dist[point.first][point.second-1] == -1)
                            {
                                dist[point.first][point.second-1] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first, point.second-1 ) );
                                island_tmp_size++;
                            }
                            else if( point.first == key_high && point.second-1 == key_width && dist[point.first][point.second-1] == -1)
                            {
                                dist[point.first][point.second-1] = dist[point.first][point.second]+1;
                                que.push( make_pair( point.first, point.second-1 ) );
                                island_tmp_size++;
                            }
                        }

                        if( A[key_high][key_width] == 'o' && island_tmp_size == island_size )
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                        else if( island_tmp_size-1 == island_size )
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
}
