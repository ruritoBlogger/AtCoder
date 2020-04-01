#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int N;

int dfs(int depth, int a, int b, int c)
{
    if(N == a && N == b && N == c) return depth;
    else if( (a - N == 1 && b - N == 1) || (a - N == 1 && c - N == 1) && (c - N == 1 && b - N == 1)) return depth +1;
    else if( (a == N && b == N && N - c == 1) || (a == N && c == N && N - b == 1) || (b == N && c == N && N - a == 1) ) return depth + 2;

    int score = INF;
    bool flag = true;
    if(N - a > 0 && N -b > 0)
    {
        score = min(score, dfs(depth + 1, a + 1, b + 1, c));
        flag = false;
    }
    if(N - a > 0 && N -c > 0)
    {
        score = min(score, dfs(depth + 1, a + 1, b, c + 1));
        flag = false;
    }
    if(N - c > 0 && N -b > 0)
    {
        score = min(score, dfs(depth + 1, a, b + 1, c + 1));
        flag = false;
    }
    if(flag)
    {
        if(N-a > 1) score = min(score, dfs(depth + 1, a + 2, b, c));
        if(N-b > 1) score = min(score, dfs(depth + 1, a, b+2, c));
        if(N-c > 1) score = min(score, dfs(depth + 1, a, b, c+2));
    }
    return score;
}

int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    N = max(A, max(B, C));
    cout << dfs(0, A, B, C) << endl;
}
