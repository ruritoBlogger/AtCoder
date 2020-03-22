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
    int first = (s[0]-'0')*10 + (s[1]-'0');
    int last = (s[2]-'0')*10 + (s[3]-'0');
    //cout << first << " " << last << endl;
    if( 0 < first && first < 13 )
    {
        if( 0 < last && last < 13 ) cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    }
    else if( 0 < last && last < 13 ) cout << "YYMM" << endl;
    else cout << "NA" << endl;


}
