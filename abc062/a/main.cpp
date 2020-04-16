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
    int x,y;
    cin >> x >> y;

    set<int> a;
    a.insert(1);
    a.insert(3);
    a.insert(5);
    a.insert(7);
    a.insert(8);
    a.insert(10);
    a.insert(12);

    set<int> b;
    b.insert(4);
    b.insert(6);
    b.insert(9);
    b.insert(11);

    if( x == y || (a.find(x) != a.end() && a.find(y) != a.end()) || (b.find(x) != b.end() && b.find(y) != b.end()) )
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

}
