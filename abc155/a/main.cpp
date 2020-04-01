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
    int A,B,C;
    cin >> A >> B >> C;

    set<int> ans;
    ans.insert(A);
    ans.insert(B);
    ans.insert(C);
    if( ans.size() == 2 ) cout << "Yes" << endl;
    else cout << "No" << endl;
}
