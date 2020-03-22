#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int H,W;
vector<string> A;

int tansaku( int i, int j )
{
    A[i][j] = '.';
    if( i != 0 )
    {
        if(A[i-1][j] == '#') return -INF;
    }
    if( j!= 0 )
    {
        if(A[i][j-1] == '#' ) return -INF;
    }

    if( i+1 != H && j+1 != W )
    {
        if( A[i][j+1] == '#' && A[i+1][j] == '#' ) return -INF;
        if( A[i][j+1] == '#' ) return tansaku(i, j+1)+1;
        else if( A[i+1][j] == '#' ) return tansaku(i+1, j)+1;
        else return 0;
    }
    else if( i+1 != H )
    {
        if( A[i+1][j] == '#' ) return tansaku(i+1, j)+1;
        else return 0;
    }
    else if( j+1 != W )
    {
        if( A[i][j+1] == '#' ) return tansaku(i, j+1)+1;
        else return 0;
    }
    else return 0;
}

int main()
{
    cin >> H >> W;
    
    int shape_cnt = 0;

    rep(i,H)
    {
        string tmp;
        cin >> tmp;
        A.push_back(tmp);
        rep(j,W)
        {
            if(A[i][j] == '#')shape_cnt++;
        }
    }
    
    rep(i,H)
    {
        rep(j,W)
        {
            if(A[i][j] == '#')
            {
                int tmp = tansaku( i, j ) + 1;
                //cout << tmp << " " << shape_cnt << endl;
                if( tmp < 0 )
                {
                    cout << "Impossible" << endl;
                    return 0;
                }
                if( tmp != shape_cnt ) cout << "Impossible" << endl;
                else cout << "Possible" << endl;
                return 0;
            }
        }
    }
    cout << "Possible" << endl;
}
