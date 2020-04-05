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
    string s;
    cin >> s;

    vector<int> keys;
    vector<string> ans;
    ans.push_back("Si");
    ans.push_back("La");
    ans.push_back("La");
    ans.push_back("So");
    ans.push_back("So");
    ans.push_back("Fa");
    ans.push_back("Fa");
    ans.push_back("Mi");
    ans.push_back("Re");
    ans.push_back("Re");
    ans.push_back("Do");
    ans.push_back("Do");

    rep(i,s.size()-6)
    {
        if( s[i] == 'W' && s[i+1] == 'W' && s[i+6] == 'W' )
        {
            cout << ans[i] << endl;
            return 0;
        }    
    }
}
