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

    vector<string> a(H);
    rep(i,H) cin >> a[i];
    vector<int> erased;

    rep(i,H)
    {
        bool flag = true;
        rep(j,a[i].size())
        {
            if( a[i][j] == '#' )
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            erased.push_back(i);
        }
    }
    sort(all(erased),greater<int>());
    
    rep(i,erased.size()) a.erase(a.begin()+erased[i]);

    erased.clear();

    rep(i,W)
    {
        bool flag = true;
        rep(j,a.size())
        {
            if( a[j][i] == '#' )
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            erased.push_back(i);
        }
    }
    
    sort(all(erased),greater<int>());

    rep(i,a.size())
    {
        rep(j,erased.size()) a[i].erase(a[i].begin()+erased[j]);
    }

    rep(i,a.size()) cout << a[i] << endl;
}
