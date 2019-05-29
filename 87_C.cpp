#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<int> a1;
vector<int> a2;
int n = 0;
void chmax(int &a, int b) { if (a < b) a = b; }

int dfs(int i, bool isDowned)
{
    if(i == n-1)
    {
        if(isDowned) return a2[i];
        else return a1[i] + a2[i];
    }
    
    int ans = 0;

    if(!isDowned)
    {
        chmax(ans, dfs(i+1, true) + a1[i] + a2[i] );
        chmax(ans, dfs(i+1, isDowned) + a1[i] );
    }
    else chmax(ans, dfs(i+1, isDowned) + a2[i] );

    return ans;
}

int main()
{
    cin >> n;
    vector<int> tmp;
    rep(i,n*2)
    {
        int s;
        cin >> s;
        tmp.push_back(s);
    }
    //rep(i,n) cout << tmp[n+i] << endl;
    rep(i,n) a1.push_back(tmp[i]);
    rep(i,n) a2.push_back(tmp[i+n]);
    //rep(i,n) cout << a1[i] << " " << a2[i] << endl;

    cout << dfs(0, false) << endl;
}
