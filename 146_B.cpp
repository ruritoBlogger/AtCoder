#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;
    string s;
    cin >> s;
    rep(i,s.size())
    {
        if(s[i]+N > 90) cout << char(65 + (s[i]+N-91));
        else cout << char(s[i]+N);
        //cout << char((s[i]+2)%90 + 65) << endl; 
    }
    cout << endl;
    //rep(i,s.size()) cout << s[i]+2 << endl; 
}
