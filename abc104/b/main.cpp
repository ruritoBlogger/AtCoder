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
    string S;
    cin >> S;
    
    bool flag = false;

    if( S[0] == 'A' )
    {
        int num = 0;
        REP(i, 2, S.size()-1)
        {
            if(S[i]=='C')num++;
        }
        if( num == 1 ) flag = true;
    }

    if( !flag ) cout << "WA" << endl;
    else
    {
        multiset<char> keys;
        REP(i, 1, S.size())
        {
            if( S[i] != 'C' ) keys.insert(S[i]);
        }
        for( multiset<char>::iterator itr = keys.begin(); itr != keys.end(); itr++)
        {
            if( *itr < 'a' )
            {
                cout << "WA" << endl;
                return 0;
            }
        }
        cout << "AC" <<  endl;
    }
}
