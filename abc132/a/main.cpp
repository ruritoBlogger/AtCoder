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
    sort(all(s));
    if(s[0] == s[1] && s[2] == s[3] && s[0] != s[2])cout << "Yes" << endl;
    else cout << "No" << endl;
}
