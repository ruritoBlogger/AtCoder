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
    int N,M;
    cin >> N >> M;
    
    set<int> ACs;
    multiset<int> WAs;
    
    int AC_result = 0;
    int WA_result = 0;

    rep(i,M)
    {
        int tmp;
        string result;
        cin >> tmp >> result;

        if( result == "WA" )
        {
            if( ACs.find(tmp) == ACs.end() ) WAs.insert(tmp);
        }
        else
        {
            if( ACs.find(tmp) == ACs.end() )
            {
                AC_result++;
                WA_result += WAs.count(tmp);
                WAs.erase(tmp);
            }
            ACs.insert(tmp);
        }
    }
    cout << AC_result << " " << WA_result << endl;
}
