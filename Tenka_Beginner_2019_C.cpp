#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    string s;
    cin >> n >> s;
    
    int ans = INF;
    string tmp = "#.";
    int right = 0;
    int left = 0;
    rep(i,n)
    {
        if(s[i] == tmp[1]) right++;
    }
    if(ans > left + right) ans = left + right;
    rep(i,n)
    {
        if(s[i] == tmp[0])
        {
            left++;
        }
        else
        {
            right--;
        }
        if(ans > left + right) ans = left + right;
    }
    cout << ans << endl;
}
