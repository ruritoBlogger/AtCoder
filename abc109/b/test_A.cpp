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
    int N;
    cin >> N;
    set<string> used;
    char last_used;
    bool flag=true;

    rep(i,N)
    {
        string tmp;
        cin >> tmp;

        if(i!=0)
        {
            if(tmp[0] != last_used)flag=false;
        }

        if( used.find(tmp) != used.end() ) flag=false;
        used.insert(tmp);
        last_used=tmp[tmp.size()-1];
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;


}
