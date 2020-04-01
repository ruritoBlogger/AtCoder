#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int N,A,B,C;
vector<int> l;
int small;

int dfs(vector<bool> isUsed, int a, int b, int c)
{
    if(abs(a-A) < small && abs(b-B) < small && abs(c-C) < small) return abs(a-A) + abs(b-B) + abs(c-C);

    int score = INF;
    rep(i,isUsed.size())
    {
        if(!isUsed[i])
        {
            isUsed[i] = true;
            if(a + small < A) score = min(score, dfs(isUsed, a + l[isUsed[i]], b, c));
            if(b + small < B) score = min(score, dfs(isUsed, a, b + l[isUsed[i]], c));
            if(c + small < C) score = min(score, dfs(isUsed, a, b, c + l[isUsed[i]]));
            l[isUsed[i]] = false;
        }
    }
    return score;
}

int main()
{
    cin >> N >> A >> B >> C;
    rep(i,N)
    {
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }
    sort(all(l),greater<int>());
    small = l[l.size()-1];
    vector<bool>isUsed(N,false);
    cout << dfs(isUsed, 0, 0, 0) << endl;
}
