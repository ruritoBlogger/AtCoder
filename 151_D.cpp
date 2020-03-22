#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

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

    vector<string> S(H);
    rep(i,H) cin >> S[i];

    int ans = 0;

    rep(i,H)
    {
        rep(j,W)
        {
            if( S[i][j] == '.' )
            {
                // 初期設定
                queue<pair<int, pair<int, int> > >bfs;
                vector<int> isComed(H*W,-1);

                bfs.push( make_pair(0, make_pair(i,j)) );
                isComed[i*W+j] = 0;
                
                // 探索開始
                while( ! bfs.empty() )
                {
                    pair< int, pair<int, int> >key = bfs.front();

                    bfs.pop();

                    // 下
                    if( key.second.first > 0)
                    {
                        if( S[key.second.first-1][key.second.second] == '.' && isComed[(key.second.first-1)*W+key.second.second] == -1 )
                        {
                            isComed[(key.second.first-1)*W+key.second.second] = key.first + 1;
                            bfs.push( make_pair(key.first+1, make_pair(key.second.first-1, key.second.second)) );
                        }
                    }
                    // 右
                    if( key.second.second+1 != W )
                    {
                        if( S[key.second.first][key.second.second+1] == '.' && isComed[(key.second.first)*W+key.second.second+1] == -1 )
                        {
                            isComed[(key.second.first)*W+key.second.second+1] = key.first + 1;
                            bfs.push( make_pair(key.first+1, make_pair(key.second.first, key.second.second+1)) );
                        }
                    }
                    // 上
                    if( key.second.first+1 != H )
                    {
                        if( S[key.second.first+1][key.second.second] == '.' && isComed[(key.second.first+1)*W+key.second.second] == -1 )
                        {
                            isComed[(key.second.first+1)*W+key.second.second] = key.first + 1;
                            bfs.push( make_pair(key.first+1, make_pair(key.second.first+1, key.second.second)) );
                        }
                    }
                    // 左
                    if( key.second.second > 0 )
                    {
                        if( S[key.second.first][key.second.second-1] == '.' && isComed[(key.second.first)*W+key.second.second-1] == -1 )
                        {
                            isComed[(key.second.first)*W+key.second.second-1] = key.first + 1;
                            bfs.push( make_pair(key.first+1, make_pair(key.second.first, key.second.second-1)) );
                        }
                    }
                }
                /*
                rep(i,H*W)
                {
                    if( isComed[i] != -1 ) cout << isComed[i] << " ";
                    else cout << "|" << " ";
                    if( (i+1)%W == 0 ) cout << endl;
                }
                cout << endl;
                */
                vector<int>::iterator itr = max_element(all(isComed));
                size_t index = distance(isComed.begin(), itr);
                ans = max(ans, isComed[index] );
            }
        }
    }
    cout << ans << endl;
}
