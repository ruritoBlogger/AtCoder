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
    int K;
    cin >> K;

    int n = s.size();
    
    ll key = 0;
    for( int i = 0 ; i < n; i++)
    {
        multiset<string>tmp;
        string tmp2 = "";
        ll TMP = 0;
        for( ll j = 0; j < s.size(); j++ )
        {
            if( TMP < i+1)
            {
                tmp2 += s[j];
                TMP++;
            }
            else
            {
                tmp.insert(tmp2);
                cout << tmp2 << " " << s[j] << " " << j << endl;
                tmp2 = "";
                if( i != 0 )
                {
                    tmp2 += s[j-1];
                    TMP = 0;
                }
                else
                {
                    tmp2 += s[j];
                    TMP = 1;
                }
            }
        }
        if( tmp2 != "" )tmp.insert(tmp2);
        cout << tmp.size() << endl;
        for(multiset<string>::iterator itr = tmp.begin(); itr != tmp.end(); ++itr) cout << *itr << " ";
        cout << endl;
        cout << endl;
    }
}
