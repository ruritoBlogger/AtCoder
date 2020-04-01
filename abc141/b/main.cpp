#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    cin >> s;
    bool flag = true;
    rep(i,s.size())
    {
        if( (i+1)%2 == 0 )
        {
            if( s[i] == 'L' || s[i] == 'U' || s[i] == 'D' ) continue;
            else flag = false;
        }
        else
        {
            if( s[i] == 'R' || s[i] == 'U' || s[i] == 'D' ) continue;
            else flag = false;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}
