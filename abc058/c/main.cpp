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
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    multiset<char> ans;
    rep(i, S[0].size()) ans.insert(S[0][i]);

    REP(i, 1, n)
    {
        multiset<char> tmp;
        set<char> roop;
        multiset<char> next;
        rep(j,S[i].size())
        {
            tmp.insert(S[i][j]);
            roop.insert(S[i][j]);
        }
        for(set<char>::iterator itr = roop.begin(); itr != roop.end(); itr++)
        {
            if( tmp.find(*itr) != tmp.end() && ans.find(*itr) != ans.end() )
            {
                rep(j, min(tmp.count(*itr), ans.count(*itr)) )
                {
                    next.insert(*itr);
                }
            }
        }
        ans = next;
    }
    for(multiset<char>::iterator itr = ans.begin(); itr != ans.end(); itr++) cout << *itr;
    cout << endl;
}
