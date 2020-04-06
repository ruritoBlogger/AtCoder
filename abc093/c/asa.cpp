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
    int A,B,C;
    cin >> A >> B >> C;

    int MAX = max(A, max(B,C));
    int ans = 0;

    while( A < MAX || B < MAX || C < MAX )
    {
        //cout << A << " " << B << " " << C << endl;
        if( A==B && A == MAX && C+1 == MAX )
        {
            ans += 2;
            break;
        }
        else if( A==C && A == MAX && B+1 == MAX )
        {
            ans += 2;
            break;
        }
        else if( B==C && B == MAX && A+1 == MAX )
        {
            ans += 2;
            break;
        }
        
        if( A < MAX && B < MAX )
        {
            A++;
            B++;
            ans++;
        }
        else if( A < MAX && C < MAX )
        {
            A++;
            C++;
            ans++;
        }
        else if( B < MAX && C < MAX )
        {
            B++;
            C++;
            ans++;
        }
        else if( A + 2 <= MAX )
        {
            A += 2;
            ans++;
        }
        else if( B + 2 <= MAX )
        {
            B += 2;
            ans++;
        }
        else if( C + 2 <= MAX )
        {
            C += 2;
            ans++;
        }
    }
    cout << ans << endl;
}
