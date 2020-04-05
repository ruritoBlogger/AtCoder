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

    set<char> key;
    rep(i,s.size())
    {
        key.insert(s[i]);
    }

    ll ans = INF_LL;

    for( set<char>::iterator it = key.begin(); it != key.end(); it++)
    {
        ll tmp_ans = 0;
        string tmp_s = s;
        while(true)
        {
            bool flag = true;
            rep(i,tmp_s.size())
            {
                if( tmp_s[i] != *it ) flag=false;
            }
            if(flag) break;
            tmp_ans++;
            string next_s;
            rep(i,tmp_s.size()-1)
            {
                if( tmp_s[i] == *it ) next_s.push_back(tmp_s[i]);
                else next_s.push_back(tmp_s[i+1]);
            }
            tmp_s = next_s;
            //cout << s << endl;
        }
        chmin(ans, tmp_ans);
    }
    cout << ans << endl;
}
