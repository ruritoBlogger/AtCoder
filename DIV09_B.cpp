#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int r,g,b,n;
int ans = 0;
vector<pair<int, int> >ans_pair;
bool rec(int i, int R, int G, int B)
{
    if(i == n )
    {
        rep(i,ans_pair.size())
        {
            if(R == ans_pair[i].first && G == ans_pair[i].second) return false;
        }
        ans++;
        ans_pair.push_back(make_pair(R,G));
        return true;
    }
    else if(i > n) return false;
    rec(i+r,R+1,G,B);
    rec(i+g,R,G+1,B);
    rec(i+b,R,G,B+1);
    return true;
}


int main()
{
    cin >> r >> g >> b >> n;
    //rec(0,0,0,0);
    for(int R = 0;R < n+1;R += r)
    {
        for(int G = 0;G + R < n+1;G += g)
        {
            if((n-G-R)%b == 0) ans++;
        }
    }
    cout << ans << endl;
}
