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
    string a,b,c;
    cin >> a >> b >> c;

    int a_len = a.size();
    int b_len = b.size();
    int c_len = c.size();

    int a_key = 0;
    int b_key = 0;
    int c_key = 0;
    queue<char> que;
    que.push('a');

    while( true )
    {
        if( que.front() == 'a' )
        {
            if( a_key == a_len )
            {
                cout << "A" << endl;
                return 0;
            }
            que.pop();
            que.push(a[a_key]);
            a_key++;
        }
        else if( que.front() == 'b' )
        {
            if( b_key == b_len )
            {
                cout << "B" << endl;
                return 0;
            }
            que.pop();
            que.push(b[b_key]);
            b_key++;
        }
        else
        {
            if( c_key == c_len )
            {
                cout << "C" << endl;
                return 0;
            }

            que.pop();
            que.push(c[c_key]);
            c_key++;
        }
        //cout << a_key << " " << b_key << " " << c_key << endl;
    }
}
