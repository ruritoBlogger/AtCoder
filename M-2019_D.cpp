#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void chmax(int &a, int b) { if (a < b) a = b; }

vector<int>c;
vector<pair<int, int> > nums;

int dfs(int 

int main()
{
    int N;
    cin >> N;
    vector<int>d(N);
    vector<int> Ans(N);
    c.resize(N);
    nums.resize(N-1);
    rep(i,N) nums[i].second = i + 1;
    rep(i,N-1)
    {
        int tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        nums[--tmp1].first++;
        nums[--tmp2].first++;
    }
    rep(i,N) cin >> c[i];
}
