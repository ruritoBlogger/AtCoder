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

    int year = (s[0]-'0')*1000 + (s[1]-'0')*100 + (s[2]-'0')*10 + (s[3]-'0');
    int month = (s[5]-'0') * 10 + (s[6]-'0');
    int day =  (s[8]-'0') * 10 + (s[9]-'0');

    if( year < 2019 )
    {
        cout << "Heisei" << endl;
    }
    else if( year == 2019 )
    {
        if( month < 4 ) cout << "Heisei" << endl;
        else if( month == 4 )
        {
            if( day <= 30 ) cout << "Heisei" << endl;
            else cout << "TBD" << endl;
        }
        else cout << "TBD" << endl;
    }
    else cout << "TBD" << endl;
}
