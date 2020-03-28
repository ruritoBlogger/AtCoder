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
    int X;
    cin >> X;


    for( int j = X; j > 0; j--)
    {
    for( int i = sqrt(X)+1; i > 1; i--)
    {
        int tmp_X = j;
        bool flag = false;
        while(tmp_X >= i)
        {
            if( tmp_X == i )
            {
                flag = true;
                break;
            }
            if( tmp_X%i != 0 ) break;
            tmp_X /= i;
        }
        if(flag)
        {
            cout << j << endl;
            return 0;
        }
    }
    }
    cout <<  1 << endl;
}
