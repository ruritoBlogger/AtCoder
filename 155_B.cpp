#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];

    vector<int>NEXT;
    rep(i,N)
    {
        if( (A[i]+2)%2 == 0 ) NEXT.push_back(A[i]);
    }
    rep(i,NEXT.size())
    {
        if( (NEXT[i]+3)%3 != 0 && (NEXT[i]+5)%5 != 0 )
        {
            cout << "DENIED" << endl;
            return 0;
        }
    }
    cout << "APPROVED" << endl;
}
