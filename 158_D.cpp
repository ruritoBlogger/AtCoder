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
 
    ll Q;
    cin >> Q;
 
    bool reverse = false;
    ll changed = 0;
    string ans = s;
    
    rep(i,Q)
    {
        int tmp;
        cin >> tmp;
        if( tmp == 1 )
        {
            reverse = !reverse;
            changed++;
        }
        else
        {
            int key;
            string c;
            cin >> key >> c;
            if( (reverse&&key==2) || (!reverse&&key==1) )
            {
                ans.insert(0,c);
            }
            else
            {
                ans += c;
            }
        }
    }
    if( (changed+2)%2 == 0 ) cout << ans << endl;
    else
    {
        std::reverse( ans.begin(), ans.end());
        cout << ans << endl;
    }
}
