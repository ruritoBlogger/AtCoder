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
    string s;
    cin >> s;

    if( (N+2)%2 != 0 )
    {
        cout << "No" << endl;
    }
    else
    {
        string t = "";
        rep(i,N/2) t += s[i];
        string tmp = "";
        rep(i,N/2) tmp += s[i + N/2];
        if(t == tmp ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


}
