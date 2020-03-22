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

int main()
{
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i,N) cin >> p[i];
    int tmp;
    rep(i,N)
    {
        rep(j,N)
        {
            tmp = p[i];
            p[i] = p[j];
            p[j] = tmp;
            bool flag = true;
            rep(k,N-1)
            {
                if( p[k] > p[k+1] ) flag = false;
            }
            if(flag)
            {
                cout << "YES" << endl;
                return 0;
            }
            p[j] = p[i];
            p[i] = tmp;
            //rep(l,N) cout << p[l] << " ";
            //cout << endl;
        }
    }
    cout << "NO" << endl;



}
