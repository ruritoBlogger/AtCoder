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
    
    int ac = 0;
    rep(i,s.size())
    {
        if(s[i] == 'o') ac++;
    }

    if(15 - s.size() + ac >= 8) cout << "YES" << endl;
    else cout << "NO" << endl;

}
