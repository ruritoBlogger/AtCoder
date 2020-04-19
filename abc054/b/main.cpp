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
    int N,M;
    cin >> N >> M;

    vector<string> a(N);
    rep(i,N) cin >> a[i];
    vector<string> b(M);
    rep(i,M) cin >> b[i];

    rep(i, N-M+1)
    {
        rep(j, N-M+1)
        {
            vector<string> templete;

            // ここからテンプレ切り出し
            REP(I, i, M+i)
            {
                string tmp = "";
                REP(J, j, M+j)
                {
                    tmp += a[I][J];
                }
                templete.push_back(tmp);
            }
            //rep(I,templete.size()) cout << templete[I] << endl;
            //cout << endl;
            if( b == templete )
            {
                cout << "Yes" << endl;
                return 0;
            }
        } 
    }
    cout << "No" << endl;
}
