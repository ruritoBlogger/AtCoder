#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

double dfs(double cnt, double N)
{
    if(cnt >= N) return 0;
    else return dfs(cnt * 2, N) + 1;
}

int main()
{
    int N,K;
    cin >> N >> K;

    ll ans = 0.0;
    ll kakeru = 0.0;
    for(int i = 1;i <= N; i++)
    {
        //ans += dfs(i, K);
        kakeru += pow(2,i-1);
    }
    ll moto = 1.0;
    cout << kakeru << " " << pow(2,N+1) << " " << N << endl;
    //cout << kakeru/ans << endl;
    cout << kakeru/pow(2,(N+1))/N << endl;
}
