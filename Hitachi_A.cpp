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
    string s;
    cin >> s;
    
    if( (s.size()+2)%2!=0 )
    {
        cout << "No" << endl;
        return 0;
    }
    rep(i,s.size()-1)
    {
        if( s[i] == 'h' && s[i+1] == 'i' ) i++;
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

}
